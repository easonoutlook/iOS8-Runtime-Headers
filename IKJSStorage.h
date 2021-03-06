/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@class <IKAppDataStoring>, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface IKJSStorage : IKJSObject <IKJSStorage> {
    <IKAppDataStoring> *_appStorage;
    NSMutableDictionary *_storageDict;
    NSObject<OS_dispatch_queue> *_storageQueue;
}

@property <IKAppDataStoring> * appStorage;
@property(retain) NSMutableDictionary * storageDict;
@property(retain) NSObject<OS_dispatch_queue> * storageQueue;
@property(readonly) unsigned int length;


- (id)storageQueue;
- (void)setAppStorage:(id)arg1;
- (void)setItem:(id)arg1 :(id)arg2;
- (id)key:(unsigned int)arg1;
- (id)appStorage;
- (void)setStorageQueue:(id)arg1;
- (void)setStorageDict:(id)arg1;
- (id)storageDict;
- (id)initWithAppContext:(id)arg1 appStorage:(id)arg2;
- (void).cxx_destruct;
- (void)removeItem:(id)arg1;
- (unsigned int)length;
- (void)clear;
- (id)getItem:(id)arg1;

@end
