/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class SSDownloadManager;

@interface GKDownloadObserver : NSObject <SSDownloadManagerObserver> {
    SSDownloadManager *_downloadManager;
}

@property(retain) SSDownloadManager * downloadManager;

+ (id)sharedObserver;

- (id)downloadManager;
- (void)setDownloadManager:(id)arg1;
- (BOOL)isDownloadingGame:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2;

@end
