/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableDictionary, NSMutableArray, NSMutableSet;

@interface OCXContentTypes : NSObject  {
    NSMutableArray *mContentTypes;
    NSMutableSet *mDefaultTypes;
    NSMutableDictionary *mContentTypeObjectMap;
    NSMutableDictionary *mContentTypeCountMap;
}

+ (id)relativePathForPath:(id)arg1 currentPath:(id)arg2;

- (void)addContentTypeForContentType:(id)arg1 extension:(id)arg2;
- (void)writeContentTypesToStream:(id)arg1;
- (BOOL)isLastEntryContentType:(id)arg1;
- (BOOL)containsContentType:(id)arg1 withKey:(id)arg2;
- (BOOL)containsContentType:(id)arg1;
- (id)pathForMainDocument;
- (id)pathForContentType:(id)arg1;
- (id)pathForKey:(id)arg1;
- (id)addContentTypeForKey:(id)arg1 contentType:(id)arg2 path:(id)arg3;
- (id)uniquePathForPath:(id)arg1;
- (void)populateCommonExtensions;
- (void)dealloc;
- (id)init;

@end
