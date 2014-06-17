/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSArray, NSString, NSData, NSNumber;

@interface SSPlayInfoRequestContext : NSObject <SSXPCCoding, NSCopying> {
    NSNumber *_accountIdentifier;
    NSNumber *_contentIdentifier;
    NSString *_playerGUID;
    NSData *_sic;
    NSArray *_sinfs;
}

@property(copy) NSString * playerGUID;
@property(copy) NSData * SICData;
@property(copy) NSArray * sinfs;
@property(copy) NSNumber * accountIdentifier;
@property(copy) NSNumber * contentIdentifier;


- (id)playerGUID;
- (id)contentIdentifier;
- (id)SICData;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (id)accountIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setContentIdentifier:(id)arg1;
- (void)setAccountIdentifier:(id)arg1;
- (void)setSinfs:(id)arg1;
- (void)setSICData:(id)arg1;
- (void)setPlayerGUID:(id)arg1;
- (void)dealloc;
- (id)sinfs;

@end
