/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@class NSString, CPLLibraryManager, CPLPlatformObject, NSProgress;

@interface CPLChangeSession : NSObject <CPLAbstractObject> {
    CPLPlatformObject *_platformObject;
    NSProgress *_sessionProgress;
    NSString *_sessionIdentifier;
    CPLLibraryManager *_libraryManager;
    unsigned int _state;
}

@property(readonly) NSProgress * sessionProgress;
@property(readonly) NSString * sessionIdentifier;
@property(readonly) CPLLibraryManager * libraryManager;
@property unsigned int state;
@property(readonly) CPLPlatformObject * platformObject;

+ (id)stateDescriptionForState:(unsigned int)arg1;
+ (id)platformImplementationProtocol;

- (void)finalizeWithCompletionHandler:(id)arg1;
- (id)sessionProgress;
- (void)beginSessionWithKnownLibraryVersion:(id)arg1 completionHandler:(id)arg2;
- (id)initWithLibraryManager:(id)arg1;
- (void)tearDownWithCompletionHandler:(id)arg1;
- (id)libraryManager;
- (id)_sessionLogDomain;
- (id)platformObject;
- (void)pause;
- (void).cxx_destruct;
- (void)resume;
- (void)setState:(unsigned int)arg1;
- (id)sessionIdentifier;
- (unsigned int)state;
- (void)dealloc;
- (id)init;

@end