/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

@class NSMutableArray, NSMutableDictionary;

@interface SCROEvent : NSObject  {
    int _handlerType;
    NSMutableArray *_callbacks;
    NSMutableDictionary *_setDictionary;
    NSMutableDictionary *_getDictionary;
    NSMutableArray *_actions;
    BOOL _readOnly;
}

+ (id)brailleEvent;

- (void)performWithHandler:(id)arg1 trusted:(BOOL)arg2;
- (id)claimDictionary;
- (void)setClaimDictionary:(id)arg1;
- (id)mainDictionary;
- (void)setMainDictionary:(id)arg1;
- (id)claimValueForKey:(int)arg1;
- (void)requestPerformActionForKey:(int)arg1;
- (void)requestValueForKey:(int)arg1;
- (void)requestSetValue:(id)arg1 forKey:(int)arg2;
- (void)requestRegisterCallbackForKey:(int)arg1;
- (int)handlerType;
- (id)initForHandlerType:(int)arg1;
- (void)dealloc;

@end