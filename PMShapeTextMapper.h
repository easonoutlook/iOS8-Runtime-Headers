/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADTextBody, OADOrientedBounds, CMStyle;

@interface PMShapeTextMapper : CMMapper  {
    OADTextBody *mTextBody;
    OADOrientedBounds *mBounds;
    CMStyle *mStyle;
    BOOL mRectangular;
}


- (BOOL)isTableCellContent;
- (void)setRectangular:(BOOL)arg1;
- (int)textAnchor;
- (id)initWithOadTextBody:(id)arg1 bounds:(id)arg2 parent:(id)arg3;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)dealloc;

@end
