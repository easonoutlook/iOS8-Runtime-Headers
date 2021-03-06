/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@class NSMutableDictionary;

@interface TIKeyboardLayoutFactory : NSObject  {
    void *_layoutsLibraryHandle;
    NSMutableDictionary *_internalCache;
}

@property(readonly) void* layoutsLibraryHandle;
@property(retain) NSMutableDictionary * internalCache;

+ (id)layoutsFileName;
+ (id)sharedKeyboardFactory;

- (void*)layoutsLibraryHandle;
- (void)setInternalCache:(id)arg1;
- (id)internalCache;
- (id)keyboardPrefixForWidth:(float)arg1;
- (id)keyboardWithName:(id)arg1 inCache:(id)arg2;
- (void)dealloc;
- (id)init;

@end
