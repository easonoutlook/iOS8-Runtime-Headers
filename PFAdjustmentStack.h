/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSOrderedSet, NSArray;

@interface PFAdjustmentStack : NSObject <NSCopying, NSFastEnumeration> {
    NSArray *_adjustments;
    NSOrderedSet *_maskUUIDs;
    unsigned int _formatVersion;
}

+ (BOOL)isValidEnvelopeDictionary:(id)arg1 errors:(id)arg2;

- (id)maskUUIDs;
- (id)adjustmentsWithIdentifier:(id)arg1;
- (id)firstAdjustmentWithIdentifier:(id)arg1;
- (id)adjustmentAtIndex:(unsigned int)arg1;
- (id)initWithAdjustments:(id)arg1;
- (id)initWithEnvelopeDictionary:(id)arg1;
- (id)envelopeDictionary;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (id)description;
- (unsigned int)count;
- (id)init;

@end
