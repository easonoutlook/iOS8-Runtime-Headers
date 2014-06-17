/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@class NSArray;

@interface ICCameraFolder : ICCameraItem  {
    void *_folderProperties;
    int _filesLock;
    int _foldersLock;
}

@property(readonly) NSArray * contents;


- (id)files;
- (BOOL)hasThumbnail;
- (void)requestThumbnail;
- (void)requestMetadata;
- (void)deleteFolder:(id)arg1;
- (void)deleteFile:(id)arg1;
- (void)unlockFolders;
- (void)lockFolders;
- (void)unlockFiles;
- (void)lockFiles;
- (id)initWithName:(id)arg1 parentFolder:(id)arg2 device:(id)arg3;
- (void)addFolder:(id)arg1;
- (void)deleteItem:(id)arg1;
- (id)folders;
- (id)metadata;
- (struct CGImage { }*)thumbnail;
- (id)valueForUndefinedKey:(id)arg1;
- (id)description;
- (id)contents;
- (void)dealloc;
- (void)finalize;
- (void)addFile:(id)arg1;

@end
