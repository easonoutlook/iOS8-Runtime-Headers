/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@class NSArray, NSString, NSDictionary;

@interface SKTextureAtlas : NSObject <NSCoding> {
    NSDictionary *_textureDict;
    NSString *_atlasName;
}

@property(readonly) NSArray * textureNames;

+ (id)atlasWithDictionary:(id)arg1;
+ (id)getSupportedPostfixes;
+ (void)preloadTextureAtlases:(id)arg1 withCompletionHandler:(id)arg2;
+ (id)atlasNamed:(id)arg1;
+ (id)findTextureNamed:(id)arg1;

- (void)unload;
- (void).cxx_destruct;
- (id)textureNames;
- (id)findTextureNamedFromAtlas:(id)arg1;
- (void)parseAtlasPropertyList:(id)arg1 withPath:(id)arg2;
- (void)loadTextures;
- (void)preload;
- (void)preloadWithCompletionHandler:(id)arg1;
- (id)_copyImageData;
- (id)textureNamed:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;

@end
