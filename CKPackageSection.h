/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class NSData;

@interface CKPackageSection : NSObject  {
    int _index;
    NSData *_signature;
    long long _size;
}

@property(readonly) int index;
@property(readonly) NSData * signature;
@property long long size;


- (id)initWithIndex:(int)arg1 signature:(id)arg2 size:(long long)arg3;
- (id)CKPropertiesDescription;
- (id)signature;
- (void).cxx_destruct;
- (int)index;
- (void)setSize:(long long)arg1;
- (long long)size;
- (id)description;

@end
