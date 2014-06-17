/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDPivotFieldItem : NSObject  {
    boolmChildItems;
    boolmExpanded;
    boolmCalculatedMember;
    boolmMissed;
    boolmHidden;
    boolmDetailsHidden;
    int mType;
    unsigned long mItemIndex;
}

+ (id)pivotFieldItem;

- (bool)hidden;
- (void)setItemIndex:(unsigned long)arg1;
- (unsigned long)itemIndex;
- (void)setDetailsHidden:(bool)arg1;
- (bool)detailsHidden;
- (void)setMissed:(bool)arg1;
- (bool)missed;
- (void)setCalculatedMember:(bool)arg1;
- (bool)calculatedMember;
- (void)setChildItems:(bool)arg1;
- (bool)childItems;
- (bool)expanded;
- (void)setExpanded:(bool)arg1;
- (int)type;
- (void)setType:(int)arg1;
- (void)setHidden:(bool)arg1;
- (id)init;

@end