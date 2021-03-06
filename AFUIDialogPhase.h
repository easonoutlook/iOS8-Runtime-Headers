/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

@class NSString;

@interface AFUIDialogPhase : NSObject <NSSecureCoding> {
    int _type;
}

@property(getter=isTemporary,readonly) BOOL temporary;
@property(getter=isExpository,readonly) BOOL expository;
@property(getter=isConfirmationDialogPhase,readonly) BOOL confirmationDialogPhase;
@property(getter=isReflectionDialogPhase,readonly) BOOL reflectionDialogPhase;
@property(getter=isClarificationDialogPhase,readonly) BOOL clarificationDialogPhase;
@property(getter=isConfirmedDialogPhase,readonly) BOOL confirmedDialogPhase;
@property(getter=isCancelledDialogPhase,readonly) BOOL cancelledDialogPhase;
@property(getter=isUserRequestDialogPhase,readonly) BOOL userRequestDialogPhase;
@property(getter=isErrorDialogPhase,readonly) BOOL errorDialogPhase;
@property(readonly) NSString * aceDialogPhaseValue;
@property(getter=_type,readonly) int type;

+ (id)userRequestDialogPhase;
+ (id)_dialogPhaseWithType:(int)arg1;
+ (id)cancelledDialogPhase;
+ (id)confirmedDialogPhase;
+ (id)errorDialogPhase;
+ (id)completionDialogPhase;
+ (id)confirmationDialogPhase;
+ (id)summaryDialogPhase;
+ (id)clarificationDialogPhase;
+ (id)statusDialogPhase;
+ (id)reflectionDialogPhase;
+ (id)acknowledgementDialogPhase;
+ (id)dialogPhaseForAceDialogPhase:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (id)_initWithType:(int)arg1;
- (BOOL)isErrorDialogPhase;
- (BOOL)isUserRequestDialogPhase;
- (BOOL)isCancelledDialogPhase;
- (BOOL)isConfirmedDialogPhase;
- (BOOL)isClarificationDialogPhase;
- (BOOL)isConfirmationDialogPhase;
- (BOOL)isExpository;
- (BOOL)replacesPreviousSnippetContents;
- (id)aceDialogPhaseValue;
- (BOOL)isEqualToDialogPhase:(id)arg1;
- (BOOL)isReflectionDialogPhase;
- (int)_type;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (BOOL)isTemporary;

@end
