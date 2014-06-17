/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SAMPAlbumCollection : SAMPCollection  {
}

@property(copy) NSString * artist;
@property(copy) NSString * sortArtist;

+ (id)albumCollectionWithDictionary:(id)arg1 context:(id)arg2;
+ (id)albumCollection;

- (void)setSortArtist:(id)arg1;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
- (id)encodedClassName;
- (id)sortArtist;
- (id)artist;
- (void)setArtist:(id)arg1;
- (id)groupIdentifier;

@end
