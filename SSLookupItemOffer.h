/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSNumber, NSString, NSDictionary;

@interface SSLookupItemOffer : NSObject  {
    NSDictionary *_dictionary;
}

@property(readonly) NSDictionary * lookupDictionary;
@property(readonly) NSString * buyParameters;
@property(readonly) NSString * formattedPrice;
@property(readonly) NSString * offerType;
@property(readonly) NSNumber * price;


- (id)lookupDictionary;
- (id)initWithLookupDictionary:(id)arg1;
- (void)dealloc;
- (id)actionTextForType:(id)arg1;
- (id)price;
- (id)offerType;
- (id)formattedPrice;
- (id)buyParameters;

@end
