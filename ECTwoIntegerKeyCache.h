/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OITSUIntegerKeyDictionary;

@interface ECTwoIntegerKeyCache : NSObject  {
    OITSUIntegerKeyDictionary *mCache;
    BOOL _assertForCollisions;
}

@property BOOL assertForCollisions;


- (void)setAssertForCollisions:(BOOL)arg1;
- (BOOL)assertForCollisions;
- (void)setObject:(id)arg1 forKey1:(int)arg2 key2:(int)arg3;
- (id)objectForKey1:(int)arg1 key2:(int)arg2;
- (void)dealloc;
- (id)init;

@end
