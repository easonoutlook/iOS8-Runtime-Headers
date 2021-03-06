/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

@class NSBundle, NSArray, NSSet, NSMutableDictionary;

@interface SCROMobileBrailleDisplayInputManager : NSObject <SCROBrailleDisplayInputManagerProtocol> {
    NSMutableDictionary *_displayInfoDict;
    NSSet *_brailleKeys;
    NSBundle *_bundle;
    NSArray *_sixDotCommands;
    NSArray *_eightDotCommands;
}

+ (id)sharedManager;
+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (id)_bundle;
- (id)buttonNamesAtIndex:(unsigned int)arg1 forDisplayWithToken:(long)arg2;
- (id)commandAtIndex:(unsigned int)arg1 forDisplayWithToken:(long)arg2;
- (unsigned int)countForDisplayWithToken:(long)arg1;
- (id)modelIdentifierForDisplayWithToken:(long)arg1;
- (id)driverIdentifierForDisplayWithToken:(long)arg1;
- (id)commandForBrailleKey:(id)arg1;
- (void)configureWithDriverConfiguration:(id)arg1;
- (id)buttonNamesForInputIdentifier:(id)arg1 forDisplayWithToken:(long)arg2;
- (id)inputIdentifierAtIndex:(unsigned int)arg1 forDisplayWithToken:(long)arg2;
- (id)_eightDotCommands;
- (id)_sixDotCommands;
- (id)_commandsFromBrailleInputMode:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)retainCount;
- (void)dealloc;
- (id)autorelease;
- (id)retain;
- (oneway void)release;
- (id)init;

@end
