/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class NSData;

@interface IDSFaceTimeMessage : FTIDSMessage <NSCopying> {
    NSData *_sessionToken;
}

@property(copy) NSData * sessionToken;


- (id)requiredKeys;
- (void)setSessionToken:(id)arg1;
- (id)sessionToken;
- (BOOL)hasRequiredKeys:(id*)arg1;
- (BOOL)isValidMessage;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (id)messageBody;

@end