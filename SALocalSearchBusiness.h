/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSString, SALocalSearchRating, NSDictionary, NSNumber, NSURL;

@interface SALocalSearchBusiness : AceObject <SAAceSerializable> {
}

@property(copy) NSNumber * businessId;
@property(copy) NSDictionary * businessIds;
@property(copy) NSURL * businessUrl;
@property(copy) NSArray * categories;
@property(copy) NSString * extSessionGuid;
@property(copy) NSString * name;
@property(copy) NSString * openingHours;
@property(copy) NSArray * phoneNumbers;
@property(copy) NSURL * photo;
@property(retain) SALocalSearchRating * rating;
@property(copy) NSArray * reviews;
@property int totalNumberOfReviews;

+ (id)businessWithDictionary:(id)arg1 context:(id)arg2;
+ (id)business;

- (void)setTotalNumberOfReviews:(int)arg1;
- (int)totalNumberOfReviews;
- (void)setOpeningHours:(id)arg1;
- (id)openingHours;
- (void)setBusinessUrl:(id)arg1;
- (id)businessUrl;
- (void)setBusinessIds:(id)arg1;
- (void)setBusinessId:(id)arg1;
- (id)businessId;
- (id)encodedClassName;
- (void)setPhoto:(id)arg1;
- (id)businessIds;
- (id)reviews;
- (void)setReviews:(id)arg1;
- (id)phoneNumbers;
- (void)setCategories:(id)arg1;
- (id)categories;
- (id)photo;
- (id)name;
- (void)setName:(id)arg1;
- (id)rating;
- (void)setRating:(id)arg1;
- (void)setExtSessionGuid:(id)arg1;
- (id)extSessionGuid;
- (id)groupIdentifier;
- (void)setPhoneNumbers:(id)arg1;

@end
