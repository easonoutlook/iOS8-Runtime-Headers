/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@class NSString;

@interface MTLResourceAllocationInfo : NSObject <NSCopying, NSCoding> {
    BOOL _pageoffRequired;
    BOOL _purgeable;
    NSString *_memoryPool;
    unsigned int _virtualSize;
    unsigned int _residentSize;
    unsigned int _dirtySize;
    unsigned long long _uniqueIdentifier;
}

@property(readonly) NSString * memoryPool;
@property(readonly) unsigned int virtualSize;
@property(readonly) unsigned int residentSize;
@property(readonly) unsigned int dirtySize;
@property(readonly) BOOL pageoffRequired;
@property(readonly) BOOL purgeable;
@property(readonly) unsigned long long uniqueIdentifier;


- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)virtualSize;
- (BOOL)pageoffRequired;
- (unsigned int)dirtySize;
- (unsigned int)residentSize;
- (id)memoryPool;
- (BOOL)purgeable;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)uniqueIdentifier;

@end
