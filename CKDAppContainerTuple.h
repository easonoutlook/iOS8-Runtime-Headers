/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKContainerID, NSString;

@interface CKDAppContainerTuple : NSObject <NSCopying> {
    NSString *_applicationBundleID;
    CKContainerID *_containerID;
}

@property(retain) NSString * applicationBundleID;
@property(retain) CKContainerID * containerID;


- (void)setApplicationBundleID:(id)arg1;
- (id)CKPropertiesDescription;
- (id)initWithApplicationBundleID:(id)arg1 containerID:(id)arg2;
- (id)applicationBundleID;
- (void)setContainerID:(id)arg1;
- (id)containerID;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;

@end