/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class UIDocument;

@interface UIDocumentErrorRecoveryAttempter : NSObject  {
    UIDocument *_document;
    id _wrappedRecoveryAttempter;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _continuerOrNil;

    int _silentRecoveryOptionIndex;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _appModalRecoveryAttempter;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _recoveryCancelerOrNil;

    struct { 
        unsigned int attemptedRecovery : 1; 
    } _errorRecoveryAttempterFlags;
}


- (id)initWithDocument:(id)arg1 silentRecoveryOptionIndex:(unsigned int)arg2 appModalRecoveryAttempter:(id)arg3 recoveryCanceler:(id)arg4;
- (id)initWithDocument:(id)arg1 wrappedRecoveryAttempter:(id)arg2;
- (void)cancelRecovery;
- (BOOL)attemptSilentRecoveryFromError:(id)arg1 error:(id*)arg2;
- (BOOL)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned int)arg2;
- (void)dealloc;

@end
