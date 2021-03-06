/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class KNAbstractSlide;

@interface KNImager : TSDImager <TSDConnectedInfoReplacing> {
    unsigned int mSlideNumber;
    KNAbstractSlide *mSlide;
    BOOL mShouldShowInstructionalText;
}

@property unsigned int slideNumber;
@property KNAbstractSlide * slide;
@property BOOL shouldShowInstructionalText;


- (id)slide;
- (void)setShouldShowInstructionalText:(BOOL)arg1;
- (void)setSlideNumber:(unsigned int)arg1;
- (unsigned int)slideNumber;
- (void)setSlide:(id)arg1;
- (id)infoToConnectToForConnectionLineConnectedToInfo:(id)arg1;
- (BOOL)shouldShowInstructionalText;
- (id)initWithDocumentRoot:(id)arg1;

@end
