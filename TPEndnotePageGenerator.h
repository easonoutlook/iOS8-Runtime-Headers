/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TPFootnoteLayoutController;

@interface TPEndnotePageGenerator : NSObject <TPPageGenerator> {
    TPFootnoteLayoutController *_footnoteLayoutController;
}


- (id)init;
- (id)initWithFootnoteLayoutController:(id)arg1;
- (void)createOrUpdatePageHintInSectionHint:(id)arg1 withState:(id)arg2;
- (BOOL)wantsPageInSectionHint:(id)arg1 withState:(id)arg2;

@end