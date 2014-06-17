/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class NSURL, NSString;

@interface CKShareOutgoingInvitation : NSObject <NSSecureCoding> {
    NSString *_invitationMessage;
    NSURL *_invitationImageURL;
}

@property(copy) NSString * invitationMessage;
@property(copy) NSURL * invitationImageURL;

+ (BOOL)supportsSecureCoding;

- (id)invitationImageURL;
- (id)invitationMessage;
- (void)setInvitationMessage:(id)arg1;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setInvitationImageURL:(id)arg1;

@end
