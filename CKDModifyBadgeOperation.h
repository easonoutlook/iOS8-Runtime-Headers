/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDModifyBadgeOperation : CKDDatabaseOperation  {
    BOOL _thisDeviceOnly;
    unsigned int _badgeValue;
}

@property(readonly) unsigned int badgeValue;
@property(readonly) BOOL thisDeviceOnly;


- (BOOL)thisDeviceOnly;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)main;
- (unsigned int)badgeValue;

@end
