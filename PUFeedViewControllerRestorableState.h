/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class NSDate, NSURL, NSArray;

@interface PUFeedViewControllerRestorableState : NSObject <NSCoding> {
    BOOL _scrolledToNewest;
    NSDate *_date;
    NSArray *_centerAssetUUIDs;
    NSArray *_centerAssetFrames;
    NSURL *_centerSectionEntryURIRepresentation;
    struct CGSize { 
        float width; 
        float height; 
    } _collectionViewSize;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _centerSectionFrame;
}

@property(copy) NSDate * date;
@property BOOL scrolledToNewest;
@property(copy) NSArray * centerAssetUUIDs;
@property(copy) NSArray * centerAssetFrames;
@property(copy) NSURL * centerSectionEntryURIRepresentation;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } centerSectionFrame;
@property struct CGSize { float x1; float x2; } collectionViewSize;


- (void).cxx_destruct;
- (void)setDate:(id)arg1;
- (id)date;
- (void)setCollectionViewSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setCenterSectionFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setCenterSectionEntryURIRepresentation:(id)arg1;
- (void)setCenterAssetFrames:(id)arg1;
- (void)setCenterAssetUUIDs:(id)arg1;
- (void)setScrolledToNewest:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })collectionViewSize;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })centerSectionFrame;
- (id)centerSectionEntryURIRepresentation;
- (id)centerAssetFrames;
- (id)centerAssetUUIDs;
- (BOOL)scrolledToNewest;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
