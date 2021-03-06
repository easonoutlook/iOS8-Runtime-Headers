/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSLocale, NSString;

@interface MPAlternateTextTrack : MPAlternateTrack  {
    int _type;
    NSString *_name;
    NSLocale *_locale;
    int _tag;
}

@property(readonly) BOOL isInBand;
@property(readonly) NSLocale * locale;
@property(readonly) int type;
@property int tag;

+ (id)autoTrack;
+ (id)offTrack;

- (void).cxx_destruct;
- (id)displayName;
- (id)locale;
- (int)compare:(id)arg1;
- (void)setTag:(int)arg1;
- (int)tag;
- (int)type;
- (id)initWithType:(int)arg1 name:(id)arg2 locale:(id)arg3;
- (id)_displayNameForName:(id)arg1;
- (BOOL)isInBand;

@end
