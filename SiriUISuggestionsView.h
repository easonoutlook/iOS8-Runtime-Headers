/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@class NSMutableOrderedSet, SiriUIAcousticIDSpinner, NSTimer, UILabel, <SiriUISuggestionsViewDelegate>, NSString, UIColor, NSArray;

@interface SiriUISuggestionsView : UIView  {
    UILabel *_headerLabel;
    UILabel *_oldHeaderLabel;
    UILabel *_subHeaderLabel;
    NSArray *_suggestionLabels;
    NSArray *_oldSuggestionLabels;
    BOOL _firstSuggestionPresentation;
    NSTimer *_updateSuggestionsTimer;
    NSMutableOrderedSet *_pendedSuggestions;
    SiriUIAcousticIDSpinner *_acousticIDSpinner;
    NSString *_headerText;
    NSString *_subHeaderText;
    UIColor *_textColor;
    <SiriUISuggestionsViewDelegate> *_delegate;
    int _orientation;
    struct CGPoint { 
        float x; 
        float y; 
    } _contentOffset;
}

@property(copy) NSString * headerText;
@property(copy) NSString * subHeaderText;
@property(copy) UIColor * textColor;
@property struct CGPoint { float x1; float x2; } contentOffset;
@property <SiriUISuggestionsViewDelegate> * delegate;
@property int orientation;


- (void)hideAcousticIDSpinner;
- (void)showAcousticIDSpinner;
- (void)clearCurrentSuggestions;
- (void)stopSuggesting;
- (void)startSuggesting;
- (void)animateOutWithCompletion:(id)arg1;
- (int)_heightType;
- (BOOL)_isPortrait;
- (void)_setSuggestionTexts:(id)arg1;
- (void)_updateSuggestions;
- (void)_animateInSuggestionAtIndex:(unsigned int)arg1;
- (void)_animateOutSuggestionAtIndex:(unsigned int)arg1;
- (void)_loadSuggestionsViewsIfNeeded;
- (void)_loadSubHeaderViewIfNeeded;
- (void)_animateHeaderIn;
- (void)_animateHeaderOut;
- (double)_updateSuggestionsDelay;
- (float)_suggestionSpacing;
- (float)_headerToSubHeaderOffset;
- (float)_suggestionFontSize;
- (unsigned int)_numberOfSuggestionsToDisplay;
- (float)_subHeaderFontSize;
- (float)_headerFontSize;
- (id)headerText;
- (id)subHeaderText;
- (void)setSubHeaderText:(id)arg1;
- (void)setHeaderText:(id)arg1;
- (void).cxx_destruct;
- (void)setOrientation:(int)arg1;
- (id)textColor;
- (void)setContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })contentOffset;
- (void)setTextColor:(id)arg1;
- (int)orientation;
- (id)delegate;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;

@end