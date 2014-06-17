/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
 */

@class UITextView;

@interface DDTextKitOperation : DDOperation  {
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _range;
    int _editCount;
}

@property(retain) UITextView * container;
@property struct _NSRange { unsigned int x1; unsigned int x2; } range;


- (BOOL)_addResultsToAttributes;
- (id)initWithContainer:(id)arg1;
- (struct __DDScanQuery { }*)_createScanQueryForBackend;
- (BOOL)_rangeValidForContainer;
- (void)_updateGenerationNumber;
- (id)newOperationForContinuation;
- (id)newOperationForStartingOver;
- (BOOL)doURLificationOnDocument;
- (BOOL)needsToStartOver;
- (void)dispatchContainerModificationBlock:(id)arg1;
- (void)setRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)cleanup;
- (struct _NSRange { unsigned int x1; unsigned int x2; })range;
- (void)textDidChange:(id)arg1;

@end
