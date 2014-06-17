/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class AVItem, NSString, NSDictionary;

@interface SBUISound : NSObject  {
    int _soundType;
    unsigned long _systemSoundID;
    unsigned int _soundBehavior;
    NSString *_ringtoneName;
    AVItem *_avItem;
    NSDictionary *_vibrationPattern;
    BOOL _repeats;
    double _maxDuration;
    NSDictionary *_controllerAttributes;
    int _alertType;
    NSString *_accountIdentifier;
    NSString *_toneIdentifier;
    NSString *_vibrationIdentifier;
    NSString *_resolvedToneIdentifier;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionBlock;

    NSString *_songPath;
}

@property int soundType;
@property unsigned long systemSoundID;
@property unsigned int soundBehavior;
@property(retain) NSString * ringtoneName;
@property(retain) AVItem * avItem;
@property(retain) NSDictionary * vibrationPattern;
@property(getter=isRepeating) BOOL repeats;
@property double maxDuration;
@property(retain) NSDictionary * controllerAttributes;
@property int alertType;
@property(copy) NSString * accountIdentifier;
@property(copy) NSString * toneIdentifier;
@property(copy) NSString * vibrationIdentifier;
@property(copy) NSString * songPath;


- (BOOL)isPlaying;
- (void)_setResolvedToneIdentifier:(id)arg1;
- (id)_resolvedToneIdentifier;
- (void)_setCompletionBlock:(id)arg1;
- (id)initWithSong:(id)arg1 vibrationPattern:(id)arg2 repeats:(BOOL)arg3 maxDuration:(double)arg4 controllerAttributes:(id)arg5;
- (id)initWithToneAlert:(int)arg1 accountIdentifier:(id)arg2 toneIdentifier:(id)arg3 vibrationIdentifier:(id)arg4;
- (id)initWithAVItem:(id)arg1 vibrationPattern:(id)arg2 repeats:(BOOL)arg3 maxDuration:(double)arg4 controllerAttributes:(id)arg5;
- (id)initWithRingtone:(id)arg1 vibrationPattern:(id)arg2 repeats:(BOOL)arg3 maxDuration:(double)arg4 controllerAttributes:(id)arg5;
- (id)controllerAttributes;
- (void)setAvItem:(id)arg1;
- (void)setControllerAttributes:(id)arg1;
- (BOOL)playInEvironments:(int)arg1 completion:(id)arg2;
- (id)accountIdentifier;
- (void)setMaxDuration:(double)arg1;
- (id)vibrationPattern;
- (void)setVibrationPattern:(id)arg1;
- (id)avItem;
- (double)maxDuration;
- (id)songPath;
- (id)vibrationIdentifier;
- (id)toneIdentifier;
- (BOOL)isRepeating;
- (id)ringtoneName;
- (unsigned int)soundBehavior;
- (unsigned long)systemSoundID;
- (void)setSongPath:(id)arg1;
- (void)setVibrationIdentifier:(id)arg1;
- (void)setToneIdentifier:(id)arg1;
- (void)setRingtoneName:(id)arg1;
- (void)setSoundBehavior:(unsigned int)arg1;
- (void)setSystemSoundID:(unsigned long)arg1;
- (id)initWithSystemSoundID:(unsigned long)arg1 behavior:(unsigned int)arg2 vibrationPattern:(id)arg3;
- (int)soundType;
- (void)setSoundType:(int)arg1;
- (id)_completionBlock;
- (void)setAccountIdentifier:(id)arg1;
- (void)stop;
- (id)description;
- (void)dealloc;
- (void)setRepeats:(BOOL)arg1;
- (int)alertType;
- (void)setAlertType:(int)arg1;

@end
