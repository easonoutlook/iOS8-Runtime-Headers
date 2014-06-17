/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@class NSString, HSConnection;

@interface HSCloudLibrary : NSObject  {
    NSString *_name;
    NSString *_uniqueIdentifier;
    HSConnection *_connection;
}

@property(copy,readonly) NSString * name;
@property(copy,readonly) NSString * uniqueIdentifier;
@property(readonly) HSConnection * connection;


- (id)initWithConnectionConfiguration:(id)arg1;
- (id)connection;
- (void).cxx_destruct;
- (id)uniqueIdentifier;
- (id)name;

@end
