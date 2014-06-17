/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSWPParagraphStyle;

@interface TSCHLegendCellMetrics : NSObject  {
    TSWPParagraphStyle *mParagraphStyle;
    struct __CTFont { } *mFont;
    float mBadgeSize;
    float mLegendSymbolGap;
    float mTrueTitleHeight;
    float mLineGap;
    float mBaseline;
}

@property(readonly) TSWPParagraphStyle * paragraphStyle;
@property(readonly) struct __CTFont { }* font;
@property(readonly) float badgeSize;
@property(readonly) float symbolGap;
@property(readonly) float titleHeight;
@property(readonly) float lineGap;
@property(readonly) float baseline;


- (float)baseline;
- (struct __CTFont { }*)font;
- (void)dealloc;
- (float)lineGap;
- (float)titleHeight;
- (float)badgeSize;
- (id)initWithParagraphStyle:(id)arg1;
- (float)symbolGap;
- (id)paragraphStyle;

@end
