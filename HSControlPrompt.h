/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@class NSString;

@interface HSControlPrompt : NSObject  {
    BOOL _secureText;
    unsigned int _keyboardType;
    unsigned int _messageType;
    unsigned int _promptID;
    NSString *_string;
    NSString *_subText;
    NSString *_title;
    unsigned int _version;
    unsigned long long _sessionID;
}

@property unsigned int keyboardType;
@property unsigned int messageType;
@property unsigned int promptID;
@property(getter=isSecureText) BOOL secureText;
@property unsigned long long sessionID;
@property(copy) NSString * string;
@property(copy) NSString * subText;
@property(copy) NSString * title;
@property unsigned int version;


- (id)subText;
- (BOOL)isSecureText;
- (unsigned int)promptID;
- (void)setSubText:(id)arg1;
- (void)setSecureText:(BOOL)arg1;
- (void)setPromptID:(unsigned int)arg1;
- (void)setSessionID:(unsigned long long)arg1;
- (unsigned long long)sessionID;
- (void).cxx_destruct;
- (unsigned int)version;
- (void)setVersion:(unsigned int)arg1;
- (void)setString:(id)arg1;
- (void)setKeyboardType:(unsigned int)arg1;
- (unsigned int)keyboardType;
- (id)string;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)description;
- (void)setMessageType:(unsigned int)arg1;
- (unsigned int)messageType;

@end
