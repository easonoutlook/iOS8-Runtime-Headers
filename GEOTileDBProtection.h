/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTileDBProtection : NSObject  {
    int _currentState;
    int _notifyToken;
}

+ (id)sharedObject;

- (void)_statusChanged;
- (void)updateState;
- (int)state;
- (void)dealloc;
- (id)init;

@end
