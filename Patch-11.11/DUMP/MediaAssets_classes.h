// Class MediaAssets.MediaSourceRendererInterface
// Size: 0x30 (Inherited: 0x30)
struct UMediaSourceRendererInterface : UInterface {
};

// Class MediaAssets.MediaTexture
// Size: 0x2c0 (Inherited: 0x1e0)
struct UMediaTexture : UTexture {
	enum class TextureAddress AddressX; // 0x1d8(0x01)
	enum class TextureAddress AddressY; // 0x1d9(0x01)
	bool AutoClear; // 0x1da(0x01)
	struct FLinearColor ClearColor; // 0x1dc(0x10)
	bool EnableGenMips; // 0x1ec(0x01)
	char NumMips; // 0x1ed(0x01)
	bool NewStyleOutput; // 0x1ee(0x01)
	enum class MediaTextureOutputFormat OutputFormat; // 0x1ef(0x01)
	float CurrentAspectRatio; // 0x1f0(0x04)
	enum class MediaTextureOrientation CurrentOrientation; // 0x1f4(0x01)
	struct UMediaPlayer* MediaPlayer; // 0x1f8(0x08)
	char pad_204[0xbc]; // 0x204(0xbc)

	void UpdateResource(); // Function MediaAssets.MediaTexture.UpdateResource // (Native|Public|BlueprintCallable) // @ game+0x3a1d8d0
	void SetMediaPlayer(struct UMediaPlayer* NewMediaPlayer); // Function MediaAssets.MediaTexture.SetMediaPlayer // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3a1d900
	int32_t GetWidth(); // Function MediaAssets.MediaTexture.GetWidth // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a1da80
	int32_t GetTextureNumMips(); // Function MediaAssets.MediaTexture.GetTextureNumMips // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a1da60
	struct UMediaPlayer* GetMediaPlayer(); // Function MediaAssets.MediaTexture.GetMediaPlayer // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a1da20
	int32_t GetHeight(); // Function MediaAssets.MediaTexture.GetHeight // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a1daa0
	float GetAspectRatio(); // Function MediaAssets.MediaTexture.GetAspectRatio // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a1dac0
};

// Class MediaAssets.MediaSource
// Size: 0x88 (Inherited: 0x30)
struct UMediaSource : UObject {
	char pad_30[0x58]; // 0x30(0x58)

	bool Validate(); // Function MediaAssets.MediaSource.Validate // (RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a33320
	void SetMediaOptionString(struct FName& Key, struct FString Value); // Function MediaAssets.MediaSource.SetMediaOptionString // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3a32b30
	void SetMediaOptionInt64(struct FName& Key, int64_t Value); // Function MediaAssets.MediaSource.SetMediaOptionInt64 // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3a32d90
	void SetMediaOptionFloat(struct FName& Key, float Value); // Function MediaAssets.MediaSource.SetMediaOptionFloat // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3a32f80
	void SetMediaOptionBool(struct FName& Key, bool Value); // Function MediaAssets.MediaSource.SetMediaOptionBool // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3a33130
	struct FString GetUrl(); // Function MediaAssets.MediaSource.GetUrl // (RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a33360
};

// Class MediaAssets.BaseMediaSource
// Size: 0x98 (Inherited: 0x88)
struct UBaseMediaSource : UMediaSource {
	struct FName PlayerName; // 0x88(0x0c)
	char pad_94[0x4]; // 0x94(0x04)
};

// Class MediaAssets.FileMediaSource
// Size: 0xc0 (Inherited: 0x98)
struct UFileMediaSource : UBaseMediaSource {
	struct FString FilePath; // 0x98(0x10)
	bool PrecacheFile; // 0xa8(0x01)
	char pad_A9[0x17]; // 0xa9(0x17)

	void SetFilePath(struct FString Path); // Function MediaAssets.FileMediaSource.SetFilePath // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3a1e710
};

// Class MediaAssets.MediaComponent
// Size: 0xe8 (Inherited: 0xd8)
struct UMediaComponent : UActorComponent {
	struct UMediaTexture* MediaTexture; // 0xd8(0x08)
	struct UMediaPlayer* MediaPlayer; // 0xe0(0x08)

	struct UMediaTexture* GetMediaTexture(); // Function MediaAssets.MediaComponent.GetMediaTexture // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a1fc00
	struct UMediaPlayer* GetMediaPlayer(); // Function MediaAssets.MediaComponent.GetMediaPlayer // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a1fc20
};

// Class MediaAssets.MediaTimeStampInfo
// Size: 0x40 (Inherited: 0x30)
struct UMediaTimeStampInfo : UObject {
	struct FTimespan Time; // 0x30(0x08)
	int64_t SequenceIndex; // 0x38(0x08)
};

// Class MediaAssets.MediaPlayer
// Size: 0x170 (Inherited: 0x30)
struct UMediaPlayer : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct FMulticastInlineDelegate OnEndReached; // 0x38(0x10)
	struct FMulticastInlineDelegate OnMediaClosed; // 0x48(0x10)
	struct FMulticastInlineDelegate OnMediaOpened; // 0x58(0x10)
	struct FMulticastInlineDelegate OnMediaOpenFailed; // 0x68(0x10)
	struct FMulticastInlineDelegate OnPlaybackResumed; // 0x78(0x10)
	struct FMulticastInlineDelegate OnPlaybackSuspended; // 0x88(0x10)
	struct FMulticastInlineDelegate OnSeekCompleted; // 0x98(0x10)
	struct FMulticastInlineDelegate OnTracksChanged; // 0xa8(0x10)
	struct FMulticastInlineDelegate OnMetadataChanged; // 0xb8(0x10)
	struct FTimespan CacheAhead; // 0xc8(0x08)
	struct FTimespan CacheBehind; // 0xd0(0x08)
	struct FTimespan CacheBehindGame; // 0xd8(0x08)
	bool NativeAudioOut; // 0xe0(0x01)
	bool PlayOnOpen; // 0xe1(0x01)
	char pad_E2[0x2]; // 0xe2(0x02)
	char Shuffle : 1; // 0xe4(0x01)
	char Loop : 1; // 0xe4(0x01)
	char pad_E4_2 : 6; // 0xe4(0x01)
	char pad_E5[0x3]; // 0xe5(0x03)
	struct UMediaPlaylist* Playlist; // 0xe8(0x08)
	int32_t PlaylistIndex; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)
	struct FTimespan TimeDelay; // 0xf8(0x08)
	float HorizontalFieldOfView; // 0x100(0x04)
	float VerticalFieldOfView; // 0x104(0x04)
	struct FRotator ViewRotation; // 0x108(0x18)
	char pad_120[0x28]; // 0x120(0x28)
	struct FGuid PlayerGuid; // 0x148(0x10)
	char pad_158[0x18]; // 0x158(0x18)

	bool SupportsSeeking(); // Function MediaAssets.MediaPlayer.SupportsSeeking // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a20960
	bool SupportsScrubbing(); // Function MediaAssets.MediaPlayer.SupportsScrubbing // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a20990
	bool SupportsRate(float Rate, bool Unthinned); // Function MediaAssets.MediaPlayer.SupportsRate // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a209c0
	bool SetViewRotation(struct FRotator& Rotation, bool Absolute); // Function MediaAssets.MediaPlayer.SetViewRotation // (Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3a20cf0
	bool SetViewField(float Horizontal, float Vertical, bool Absolute); // Function MediaAssets.MediaPlayer.SetViewField // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3a20ee0
	bool SetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex, float FrameRate); // Function MediaAssets.MediaPlayer.SetVideoTrackFrameRate // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3a21140
	bool SetTrackFormat(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.SetTrackFormat // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3a213d0
	void SetTimeDelay(struct FTimespan TimeDelay); // Function MediaAssets.MediaPlayer.SetTimeDelay // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3a20bf0
	bool SetRate(float Rate); // Function MediaAssets.MediaPlayer.SetRate // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3a21760
	bool SetNativeVolume(float Volume); // Function MediaAssets.MediaPlayer.SetNativeVolume // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3a21640
	void SetMediaOptions(struct UMediaSource* OPTIONS); // Function MediaAssets.MediaPlayer.SetMediaOptions // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x33ba9c0
	bool SetLooping(bool Looping); // Function MediaAssets.MediaPlayer.SetLooping // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3a21860
	void SetDesiredPlayerName(struct FName PlayerName); // Function MediaAssets.MediaPlayer.SetDesiredPlayerName // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3a21960
	void SetBlockOnTime(struct FTimespan& Time); // Function MediaAssets.MediaPlayer.SetBlockOnTime // (Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3a21a60
	bool SelectTrack(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex); // Function MediaAssets.MediaPlayer.SelectTrack // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3a21c40
	bool Seek(struct FTimespan& Time); // Function MediaAssets.MediaPlayer.Seek // (Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3a21dd0
	bool Rewind(); // Function MediaAssets.MediaPlayer.Rewind // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3a21ed0
	bool Reopen(); // Function MediaAssets.MediaPlayer.Reopen // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3a21f10
	bool Previous(); // Function MediaAssets.MediaPlayer.Previous // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3a21f60
	void PlayAndSeek(); // Function MediaAssets.MediaPlayer.PlayAndSeek // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3a21f90
	bool Play(); // Function MediaAssets.MediaPlayer.Play // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3a21fb0
	bool Pause(); // Function MediaAssets.MediaPlayer.Pause // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3a21ff0
	bool OpenUrl(struct FString URL); // Function MediaAssets.MediaPlayer.OpenUrl // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3a22030
	bool OpenSourceWithOptions(struct UMediaSource* MediaSource, struct FMediaPlayerOptions& OPTIONS); // Function MediaAssets.MediaPlayer.OpenSourceWithOptions // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3a22680
	void OpenSourceLatent(struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo, struct UMediaSource* MediaSource, struct FMediaPlayerOptions& OPTIONS, bool& bSuccess); // Function MediaAssets.MediaPlayer.OpenSourceLatent // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3a222c0
	bool OpenSource(struct UMediaSource* MediaSource); // Function MediaAssets.MediaPlayer.OpenSource // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3a22850
	bool OpenPlaylistIndex(struct UMediaPlaylist* InPlaylist, int32_t Index); // Function MediaAssets.MediaPlayer.OpenPlaylistIndex // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3a22cb0
	bool OpenPlaylist(struct UMediaPlaylist* InPlaylist); // Function MediaAssets.MediaPlayer.OpenPlaylist // (Final|Native|Public|BlueprintCallable) // @ game+0x3a23050
	bool OpenFile(struct FString FilePath); // Function MediaAssets.MediaPlayer.OpenFile // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3a23340
	bool Next(); // Function MediaAssets.MediaPlayer.Next // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3a23bd0
	bool IsReady(); // Function MediaAssets.MediaPlayer.IsReady // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a23c00
	bool IsPreparing(); // Function MediaAssets.MediaPlayer.IsPreparing // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a23c60
	bool IsPlaying(); // Function MediaAssets.MediaPlayer.IsPlaying // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a23ca0
	bool IsPaused(); // Function MediaAssets.MediaPlayer.IsPaused // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a23ce0
	bool IsLooping(); // Function MediaAssets.MediaPlayer.IsLooping // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a23d10
	bool IsConnecting(); // Function MediaAssets.MediaPlayer.IsConnecting // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a23d40
	bool IsClosed(); // Function MediaAssets.MediaPlayer.IsClosed // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a23c30
	bool IsBuffering(); // Function MediaAssets.MediaPlayer.IsBuffering // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a23d70
	bool HasError(); // Function MediaAssets.MediaPlayer.HasError // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a23da0
	struct FRotator GetViewRotation(); // Function MediaAssets.MediaPlayer.GetViewRotation // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a23e10
	struct FString GetVideoTrackType(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetVideoTrackType // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a23e50
	struct FFloatRange GetVideoTrackFrameRates(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetVideoTrackFrameRates // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a24050
	float GetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetVideoTrackFrameRate // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a242b0
	struct FIntPoint GetVideoTrackDimensions(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetVideoTrackDimensions // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a24520
	float GetVideoTrackAspectRatio(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetVideoTrackAspectRatio // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a24790
	float GetVerticalFieldOfView(); // Function MediaAssets.MediaPlayer.GetVerticalFieldOfView // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a24a10
	struct FString GetUrl(); // Function MediaAssets.MediaPlayer.GetUrl // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a24a40
	struct FString GetTrackLanguage(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex); // Function MediaAssets.MediaPlayer.GetTrackLanguage // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a24a70
	int32_t GetTrackFormat(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex); // Function MediaAssets.MediaPlayer.GetTrackFormat // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a24c70
	struct FText GetTrackDisplayName(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex); // Function MediaAssets.MediaPlayer.GetTrackDisplayName // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a24e00
	struct UMediaTimeStampInfo* GetTimeStamp(); // Function MediaAssets.MediaPlayer.GetTimeStamp // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a25040
	struct FTimespan GetTimeDelay(); // Function MediaAssets.MediaPlayer.GetTimeDelay // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a23de0
	struct FTimespan GetTime(); // Function MediaAssets.MediaPlayer.GetTime // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a25120
	void GetSupportedRates(struct TArray<struct FFloatRange>& OutRates, bool Unthinned); // Function MediaAssets.MediaPlayer.GetSupportedRates // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a25160
	int32_t GetSelectedTrack(enum class EMediaPlayerTrack TrackType); // Function MediaAssets.MediaPlayer.GetSelectedTrack // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a253d0
	float GetRate(); // Function MediaAssets.MediaPlayer.GetRate // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a254d0
	int32_t GetPlaylistIndex(); // Function MediaAssets.MediaPlayer.GetPlaylistIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a25510
	struct UMediaPlaylist* GetPlaylist(); // Function MediaAssets.MediaPlayer.GetPlaylist // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a25530
	struct FName GetPlayerName(); // Function MediaAssets.MediaPlayer.GetPlayerName // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a25560
	int32_t GetNumTracks(enum class EMediaPlayerTrack TrackType); // Function MediaAssets.MediaPlayer.GetNumTracks // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a25740
	int32_t GetNumTrackFormats(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex); // Function MediaAssets.MediaPlayer.GetNumTrackFormats // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a255b0
	struct FText GetMediaName(); // Function MediaAssets.MediaPlayer.GetMediaName // (RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a25840
	struct TMap<struct FString, struct FMediaMetadataItemsBPT> GetMediaMetadataItems(); // Function MediaAssets.MediaPlayer.GetMediaMetadataItems // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a20860
	float GetHorizontalFieldOfView(); // Function MediaAssets.MediaPlayer.GetHorizontalFieldOfView // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a258a0
	struct FTimespan GetDuration(); // Function MediaAssets.MediaPlayer.GetDuration // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a258d0
	struct UMediaTimeStampInfo* GetDisplayTimeStamp(); // Function MediaAssets.MediaPlayer.GetDisplayTimeStamp // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a24fc0
	struct FTimespan GetDisplayTime(); // Function MediaAssets.MediaPlayer.GetDisplayTime // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a250c0
	struct FName GetDesiredPlayerName(); // Function MediaAssets.MediaPlayer.GetDesiredPlayerName // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a25910
	struct FString GetAudioTrackType(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetAudioTrackType // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a25940
	int32_t GetAudioTrackSampleRate(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetAudioTrackSampleRate // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a25b40
	int32_t GetAudioTrackChannels(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetAudioTrackChannels // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a25da0
	void Close(); // Function MediaAssets.MediaPlayer.Close // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3a26000
	bool CanPlayUrl(struct FString URL); // Function MediaAssets.MediaPlayer.CanPlayUrl // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3a26020
	bool CanPlaySource(struct UMediaSource* MediaSource); // Function MediaAssets.MediaPlayer.CanPlaySource // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3a261b0
	bool CanPause(); // Function MediaAssets.MediaPlayer.CanPause // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a26340
};

// Class MediaAssets.MediaPlayerProxyInterface
// Size: 0x30 (Inherited: 0x30)
struct UMediaPlayerProxyInterface : UInterface {
};

// Class MediaAssets.MediaPlaylist
// Size: 0x40 (Inherited: 0x30)
struct UMediaPlaylist : UObject {
	struct TArray<struct UMediaSource*> Items; // 0x30(0x10)

	bool Replace(int32_t Index, struct UMediaSource* Replacement); // Function MediaAssets.MediaPlaylist.Replace // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3a2d780
	bool RemoveAt(int32_t Index); // Function MediaAssets.MediaPlaylist.RemoveAt // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3a2d930
	bool Remove(struct UMediaSource* MediaSource); // Function MediaAssets.MediaPlaylist.Remove // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3a2da60
	int32_t Num(); // Function MediaAssets.MediaPlaylist.Num // (Final|Native|Public|BlueprintCallable) // @ game+0x3a2dc50
	void Insert(struct UMediaSource* MediaSource, int32_t Index); // Function MediaAssets.MediaPlaylist.Insert // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3a2dc70
	struct UMediaSource* GetRandom(int32_t& OutIndex); // Function MediaAssets.MediaPlaylist.GetRandom // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3a2de50
	struct UMediaSource* GetPrevious(int32_t& InOutIndex); // Function MediaAssets.MediaPlaylist.GetPrevious // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3a2df50
	struct UMediaSource* GetNext(int32_t& InOutIndex); // Function MediaAssets.MediaPlaylist.GetNext // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3a2e090
	struct UMediaSource* GET(int32_t Index); // Function MediaAssets.MediaPlaylist.GET // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3a2e1d0
	bool AddUrl(struct FString URL); // Function MediaAssets.MediaPlaylist.AddUrl // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3a2e2f0
	bool AddFile(struct FString FilePath); // Function MediaAssets.MediaPlaylist.AddFile // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3a2e530
	bool Add(struct UMediaSource* MediaSource); // Function MediaAssets.MediaPlaylist.Add // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3a2ed40
};

// Class MediaAssets.MediaSoundComponent
// Size: 0xa80 (Inherited: 0x9a0)
struct UMediaSoundComponent : USynthComponent {
	enum class EMediaSoundChannels Channels; // 0x9a0(0x04)
	bool DynamicRateAdjustment; // 0x9a4(0x01)
	char pad_9A5[0x3]; // 0x9a5(0x03)
	float RateAdjustmentFactor; // 0x9a8(0x04)
	struct FFloatRange RateAdjustmentRange; // 0x9ac(0x10)
	char pad_9BC[0x4]; // 0x9bc(0x04)
	struct UMediaPlayer* MediaPlayer; // 0x9c0(0x08)
	char pad_9C8[0xb8]; // 0x9c8(0xb8)

	void SetSpectralAnalysisSettings(struct TArray<float> InFrequenciesToAnalyze, enum class EMediaSoundComponentFFTSize InFFTSize); // Function MediaAssets.MediaSoundComponent.SetSpectralAnalysisSettings // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3a2fe20
	void SetMediaPlayer(struct UMediaPlayer* NewMediaPlayer); // Function MediaAssets.MediaSoundComponent.SetMediaPlayer // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3a30220
	void SetEnvelopeFollowingsettings(int32_t AttackTimeMsec, int32_t ReleaseTimeMsec); // Function MediaAssets.MediaSoundComponent.SetEnvelopeFollowingsettings // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3a2f9b0
	void SetEnableSpectralAnalysis(bool bInSpectralAnalysisEnabled); // Function MediaAssets.MediaSoundComponent.SetEnableSpectralAnalysis // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3a300f0
	void SetEnableEnvelopeFollowing(bool bInEnvelopeFollowing); // Function MediaAssets.MediaSoundComponent.SetEnableEnvelopeFollowing // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3a2fb70
	struct TArray<struct FMediaSoundComponentSpectralData> GetSpectralData(); // Function MediaAssets.MediaSoundComponent.GetSpectralData // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3a2fd80
	struct TArray<struct FMediaSoundComponentSpectralData> GetNormalizedSpectralData(); // Function MediaAssets.MediaSoundComponent.GetNormalizedSpectralData // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3a2fca0
	struct UMediaPlayer* GetMediaPlayer(); // Function MediaAssets.MediaSoundComponent.GetMediaPlayer // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a30340
	float GetEnvelopeValue(); // Function MediaAssets.MediaSoundComponent.GetEnvelopeValue // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a2f970
	bool BP_GetAttenuationSettingsToApply(struct FSoundAttenuationSettings& OutAttenuationSettings); // Function MediaAssets.MediaSoundComponent.BP_GetAttenuationSettingsToApply // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3a30380
};

// Class MediaAssets.PlatformMediaSource
// Size: 0x90 (Inherited: 0x88)
struct UPlatformMediaSource : UMediaSource {
	struct UMediaSource* MediaSource; // 0x88(0x08)
};

// Class MediaAssets.StreamMediaSource
// Size: 0xa8 (Inherited: 0x98)
struct UStreamMediaSource : UBaseMediaSource {
	struct FString StreamUrl; // 0x98(0x10)
};

// Class MediaAssets.TimeSynchronizableMediaSource
// Size: 0xb0 (Inherited: 0x98)
struct UTimeSynchronizableMediaSource : UBaseMediaSource {
	bool bUseTimeSynchronization; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	int32_t FrameDelay; // 0x9c(0x04)
	double TimeDelay; // 0xa0(0x08)
	bool bAutoDetectInput; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
};

// Class MediaAssets.MediaBlueprintFunctionLibrary
// Size: 0x30 (Inherited: 0x30)
struct UMediaBlueprintFunctionLibrary : UBlueprintFunctionLibrary {

	void EnumerateWebcamCaptureDevices(struct TArray<struct FMediaCaptureDevice>& OutDevices, int32_t Filter); // Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateWebcamCaptureDevices // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3a38190
	void EnumerateVideoCaptureDevices(struct TArray<struct FMediaCaptureDevice>& OutDevices, int32_t Filter); // Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateVideoCaptureDevices // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3a383c0
	void EnumerateAudioCaptureDevices(struct TArray<struct FMediaCaptureDevice>& OutDevices, int32_t Filter); // Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateAudioCaptureDevices // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3a385f0
};

