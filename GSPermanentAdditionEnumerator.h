/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage
 */

@class NSArray, NSString, GSPermanentStorage, GSDaemonProxySync, NSError;

@interface GSPermanentAdditionEnumerator : NSEnumerator <GSAdditionEnumerating> {
    GSPermanentStorage *_storage;
    NSString *_nameSpace;
    unsigned long long _withOptions;
    unsigned long long _withoutOptions;
    NSArray *_array;
    unsigned int _pos;
    GSDaemonProxySync *_proxy;
    NSError *_error;
    id _token;
}

@property(readonly) NSError * error;


- (id)error;
- (id)initWithStorage:(id)arg1 nameSpace:(id)arg2 withOptions:(unsigned long long)arg3 withoutOptions:(unsigned long long)arg4 ordering:(int)arg5;
- (void)_fetchNextBatch;
- (id)nextObject;
- (void)dealloc;

@end
