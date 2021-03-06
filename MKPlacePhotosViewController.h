/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class MKMapItem, <MKPlaceCardPhotosControllerDelegate>;

@interface MKPlacePhotosViewController : UITableViewController <_PlaceCardPhotoCollectionViewCellDelegate> {
    BOOL _showAddPhotoButton;
    BOOL _showMorePhotosButton;
    BOOL _showAttributionButtons;
    MKMapItem *_mapItem;
    <MKPlaceCardPhotosControllerDelegate> *_photosControllerDelegate;
    unsigned int _photosCount;
}

@property(retain) MKMapItem * mapItem;
@property <MKPlaceCardPhotosControllerDelegate> * photosControllerDelegate;
@property BOOL showAttributionButtons;
@property BOOL showMorePhotosButton;
@property BOOL showAddPhotoButton;
@property unsigned int photosCount;


- (unsigned int)photosCount;
- (void)setPhotosCount:(unsigned int)arg1;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)_addPhoto;
- (void)setMapItem:(id)arg1;
- (id)mapItem;
- (id)init;
- (void)photoCollectionViewCell:(id)arg1 didSelectPhotoWithID:(id)arg2;
- (void)_morePhotos;
- (float)_heightForGridView;
- (BOOL)showAddPhotoButton;
- (BOOL)showMorePhotosButton;
- (BOOL)showAttributionButtons;
- (id)photosControllerDelegate;
- (void)setShowMorePhotosButton:(BOOL)arg1;
- (void)setShowAddPhotoButton:(BOOL)arg1;
- (void)setShowAttributionButtons:(BOOL)arg1;
- (void)setPhotosControllerDelegate:(id)arg1;

@end
