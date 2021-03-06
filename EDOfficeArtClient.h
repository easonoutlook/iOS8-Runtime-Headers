/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDComment, NSMutableDictionary, EDAnchor, EDSheet, EDTextBox;

@interface EDOfficeArtClient : NSObject <OADClient, OADTextClient> {
    EDSheet *mSheet;
    id mClientState;
    EDAnchor *mAnchor;
    EDTextBox *mTextBox;
    EDComment *mComment;
    NSMutableDictionary *mTableModels;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } mBounds;
    boolmIsBoundsSet;
}


- (id)sheet;
- (id)comment;
- (void)setTextBox:(id)arg1;
- (void)setTableModels:(id)arg1;
- (id)tableModels;
- (void)setClientState:(id)arg1;
- (void)setSheet:(id)arg1;
- (bool)areBoundsSet;
- (id)textBox;
- (BOOL)hasBounds;
- (id)clientState;
- (void)setAnchor:(id)arg1;
- (id)anchor;
- (id).cxx_construct;
- (BOOL)hasText;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (void)dealloc;
- (void)setComment:(id)arg1;

@end
