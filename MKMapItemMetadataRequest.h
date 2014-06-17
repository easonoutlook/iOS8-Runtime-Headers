/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSURL, NSURLRequest, MKMapItemMetadata;

@interface MKMapItemMetadataRequest : NSObject  {
    MKMapItemMetadata *_businessMetadata;
}

@property(retain) MKMapItemMetadata * businessMetadata;
@property(readonly) NSURL * url;
@property(readonly) NSURLRequest * urlRequest;


- (id)urlRequest;
- (void)handleError:(id)arg1;
- (void).cxx_destruct;
- (id)url;
- (void)setBusinessMetadata:(id)arg1;
- (id)businessMetadata;
- (void)handleData:(id)arg1;

@end