/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@class SBKTransaction;

@interface SBKRequestData : NSObject  {
    SBKTransaction *_transaction;
}

@property(retain) SBKTransaction * transaction;

+ (id)propertyListBodyWithTransaction:(id)arg1;

- (id)initWithTransaction:(id)arg1;
- (id)serializableRequestBodyPropertyList;
- (id)transaction;
- (void)setTransaction:(id)arg1;
- (void).cxx_destruct;

@end