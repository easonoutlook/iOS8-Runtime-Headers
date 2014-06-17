/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/RadarCompose.framework/RadarCompose
 */

@class NSError, NSString;

@interface RCAuthenticationResponse : NSObject  {
    NSString *_token;
    NSString *_userName;
    NSError *_error;
}

@property(retain) NSString * token;
@property(retain) NSString * userName;
@property(retain) NSError * error;


- (void)setUserName:(id)arg1;
- (id)error;
- (void)setError:(id)arg1;
- (void)setToken:(id)arg1;
- (id)token;
- (void).cxx_destruct;
- (id)userName;

@end