/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSNumber, NSString, NSArray;

@interface SAMPPodcastCollection : SAMPCollection  {
}

@property(copy) NSString * artist;
@property(copy) NSArray * preferredPlayOrder;
@property(copy) NSString * sortArtist;
@property(copy) NSNumber * subscribed;

+ (id)podcastCollectionWithDictionary:(id)arg1 context:(id)arg2;
+ (id)podcastCollection;

- (id)subscribed;
- (void)setPreferredPlayOrder:(id)arg1;
- (id)preferredPlayOrder;
- (void)setSortArtist:(id)arg1;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
- (id)encodedClassName;
- (id)sortArtist;
- (id)artist;
- (void)setArtist:(id)arg1;
- (id)groupIdentifier;
- (void)setSubscribed:(id)arg1;

@end
