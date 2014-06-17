/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSMutableArray, NSArray;

@interface TSWPImageBulletProvider : NSObject  {
    NSMutableArray *_images;
    NSMutableArray *_filenames;
}

@property(readonly) NSArray * predefinedImages;

+ (id)sharedInstance;

- (id)predefinedImages;
- (id)dataForImageBullet:(id)arg1 withContext:(id)arg2;
- (id)p_pathToPredefinedImages;
- (id)p_predefinedImageNames;
- (id)dataForDefaultImageBulletWithContext:(id)arg1;

@end
