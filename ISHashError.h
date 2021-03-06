/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSString;

@interface ISHashError : NSObject <NSCopying> {
    NSString *_actualHashString;
    NSString *_expectedHashString;
    long long _rangeEnd;
    long long _rangeStart;
}

@property(copy) NSString * actualHashString;
@property(copy) NSString * expectedHashString;
@property(readonly) NSString * hashFailureHeaderString;
@property long long rangeEnd;
@property long long rangeStart;


- (id)expectedHashString;
- (id)actualHashString;
- (id)hashFailureHeaderString;
- (void)setRangeStart:(long long)arg1;
- (void)setRangeEnd:(long long)arg1;
- (void)setExpectedHashString:(id)arg1;
- (void)setActualHashString:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (long long)rangeEnd;
- (long long)rangeStart;

@end
