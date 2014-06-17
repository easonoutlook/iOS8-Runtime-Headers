/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSNumber, NSURL;

@interface SSVServerAuthenticateResponse : NSObject <SSXPCCoding> {
    NSNumber *_authenticatedAccountIdentifier;
    int _performedButtonIndex;
    NSURL *_redirectURL;
    int _selectedButtonIndex;
}

@property(copy) NSNumber * authenticatedAccountIdentifier;
@property int performedButtonIndex;
@property(copy) NSURL * redirectURL;
@property int selectedButtonIndex;


- (void)setSelectedButtonIndex:(int)arg1;
- (int)selectedButtonIndex;
- (void)setPerformedButtonIndex:(int)arg1;
- (int)performedButtonIndex;
- (void)setAuthenticatedAccountIdentifier:(id)arg1;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (void)setRedirectURL:(id)arg1;
- (id)redirectURL;
- (void).cxx_destruct;
- (id)authenticatedAccountIdentifier;

@end
