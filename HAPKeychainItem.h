/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@class NSNumber, NSString, NSData;

@interface HAPKeychainItem : NSObject  {
    BOOL _syncable;
    NSString *_accessGroup;
    NSNumber *_type;
    NSString *_label;
    NSString *_itemDescription;
    NSString *_account;
    NSData *_valueData;
    void *_platformReference;
}

@property(retain) NSString * accessGroup;
@property(retain) NSNumber * type;
@property(retain) NSString * label;
@property(retain) NSString * itemDescription;
@property(retain) NSString * account;
@property(retain) NSData * valueData;
@property(getter=isSyncable) BOOL syncable;
@property void* platformReference;


- (id)itemDescription;
- (void)setAccessGroup:(id)arg1;
- (id)accessGroup;
- (void)setValueData:(id)arg1;
- (id)valueData;
- (void)setPlatformReference:(void*)arg1;
- (void*)platformReference;
- (void)setSyncable:(BOOL)arg1;
- (BOOL)isSyncable;
- (void)setItemDescription:(id)arg1;
- (id)initWithQueryResult:(struct __CFDictionary { }*)arg1 shouldIncludeData:(BOOL)arg2;
- (void)setAccount:(id)arg1;
- (id)account;
- (void).cxx_destruct;
- (void)setLabel:(id)arg1;
- (id)label;
- (id)type;
- (void)setType:(id)arg1;
- (void)dealloc;

@end
