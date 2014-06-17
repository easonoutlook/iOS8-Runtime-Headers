/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMTimelapseDiskUtilities : NSObject  {
}

+ (id)dummyFilePathForTimelapseUUID:(id)arg1;
+ (id)dummyFileName;
+ (int)frameIndexFromImageFileName:(id)arg1;
+ (BOOL)writeSecondaryStateToDisk:(id)arg1 forTimelapseUUID:(id)arg2;
+ (id)secondaryStateFilePathForTimelapseUUID:(id)arg1;
+ (id)secondaryStateFileName;
+ (id)stateFilePathForTimelapseUUID:(id)arg1;
+ (id)stateFileName;
+ (id)readSecondaryStateForTimelapseUUID:(id)arg1;
+ (id)fileNameForImageFrameIndex:(int)arg1;
+ (BOOL)reserveDummyFileForTimelapseUUID:(id)arg1;
+ (BOOL)removeDummyFileForTimelapseUUID:(id)arg1;
+ (id)directoryPathForTimelapseUUID:(id)arg1;
+ (id)sortedArrayFromFilePathDictionary:(id)arg1 reverse:(BOOL)arg2;
+ (id)readFrameFilePathsForTimelapseUUID:(id)arg1;
+ (BOOL)writeStateToDisk:(id)arg1 createDirectoryIfNeeded:(BOOL)arg2;
+ (id)updateSecondaryStateForTimelapseUUID:(id)arg1 withStopReasons:(int)arg2 stopTime:(id)arg3;
+ (id)timelapseDirectoryPath;
+ (id)timelapseUUIDsOnDisk;
+ (id)readStateForTimelapseUUID:(id)arg1 mergeSecondaryState:(BOOL)arg2;
+ (id)readSortedStatesFromDiskMergeSecondaryState:(BOOL)arg1;


@end