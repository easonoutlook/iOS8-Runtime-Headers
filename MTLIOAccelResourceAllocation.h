/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@class NSString;

@interface MTLIOAccelResourceAllocation : MTLResourceAllocationInfo  {
    NSString *_memoryPool;
    unsigned int _virtualSize;
    unsigned int _residentSize;
    unsigned int _dirtySize;
    BOOL _purgeable;
    unsigned long long _uniqueIdentifier;
}


- (unsigned int)virtualSize;
- (unsigned int)dirtySize;
- (unsigned int)residentSize;
- (id)memoryPool;
- (id)initWithPool:(id)arg1 virtualSize:(unsigned int)arg2 residentSize:(unsigned int)arg3 dirtySize:(unsigned int)arg4 purgeable:(BOOL)arg5 uniqueID:(unsigned long long)arg6;
- (BOOL)purgeable;
- (unsigned long long)uniqueIdentifier;
- (void)dealloc;

@end
