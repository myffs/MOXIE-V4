package;

import haxe.io.Bytes;
import lime.utils.AssetBundle;
import lime.utils.AssetLibrary;
import lime.utils.AssetManifest;
import lime.utils.Assets;

#if sys
import sys.FileSystem;
#end

#if disable_preloader_assets
@:dox(hide) class ManifestResources {
	public static var preloadLibraries:Array<Dynamic>;
	public static var preloadLibraryNames:Array<String>;
	public static var rootPath:String;

	public static function init (config:Dynamic):Void {
		preloadLibraries = new Array ();
		preloadLibraryNames = new Array ();
	}
}
#else
@:access(lime.utils.Assets)


@:keep @:dox(hide) class ManifestResources {


	public static var preloadLibraries:Array<AssetLibrary>;
	public static var preloadLibraryNames:Array<String>;
	public static var rootPath:String;


	public static function init (config:Dynamic):Void {

		preloadLibraries = new Array ();
		preloadLibraryNames = new Array ();

		rootPath = null;

		if (config != null && Reflect.hasField (config, "rootPath")) {

			rootPath = Reflect.field (config, "rootPath");

			if(!StringTools.endsWith (rootPath, "/")) {

				rootPath += "/";

			}

		}

		if (rootPath == null) {

			#if (ios || tvos || emscripten)
			rootPath = "assets/";
			#elseif android
			rootPath = "";
			#elseif console
			rootPath = lime.system.System.applicationDirectory;
			#else
			rootPath = "./";
			#end

		}

		#if (openfl && !flash && !display)
		openfl.text.Font.registerFont (__ASSET__OPENFL__assets_fonts_pixel_otf);
		openfl.text.Font.registerFont (__ASSET__OPENFL__assets_fonts_vcr_ttf);
		openfl.text.Font.registerFont (__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf);
		openfl.text.Font.registerFont (__ASSET__OPENFL__flixel_fonts_monsterrat_ttf);
		
		#end

		var data, manifest, library, bundle;

		#if kha

		null
		library = AssetLibrary.fromManifest (manifest);
		Assets.registerLibrary ("null", library);

		if (library != null) preloadLibraries.push (library);
		else preloadLibraryNames.push ("null");

		#else

		Assets.libraryPaths["videos"] = rootPath + "manifest/videos.json";
		data = '{"name":null,"assets":"ah","rootPath":null,"version":2,"libraryArgs":[],"libraryType":null}';
		manifest = AssetManifest.parse (data, rootPath);
		library = AssetLibrary.fromManifest (manifest);
		Assets.registerLibrary ("songs", library);
		Assets.libraryPaths["shared"] = rootPath + "manifest/shared.json";
		data = '{"name":null,"assets":"aoy4:pathy33:assets%2Fcharacters%2Fbf-car.jsony4:sizei2527y4:typey4:TEXTy2:idR1y7:preloadtgoR0y39:assets%2Fcharacters%2Fbf-christmas.jsonR2i1747R3R4R5R7R6tgoR0y40:assets%2Fcharacters%2Fbf-pixel-dead.jsonR2i721R3R4R5R8R6tgoR0y44:assets%2Fcharacters%2Fbf-pixel-opponent.jsonR2i1567R3R4R5R9R6tgoR0y35:assets%2Fcharacters%2Fbf-pixel.jsonR2i1563R3R4R5R10R6tgoR0y29:assets%2Fcharacters%2Fbf.jsonR2i2905R3R4R5R11R6tgoR0y30:assets%2Fcharacters%2Fdad.jsonR2i1762R3R4R5R12R6tgoR0y32:assets%2Fcharacters%2FDerek.jsonR2i971R3R4R5R13R6tgoR0y33:assets%2Fcharacters%2Fgf-car.jsonR2i993R3R4R5R14R6tgoR0y39:assets%2Fcharacters%2Fgf-christmas.jsonR2i2137R3R4R5R15R6tgoR0y35:assets%2Fcharacters%2Fgf-pixel.jsonR2i937R3R4R5R16R6tgoR0y29:assets%2Fcharacters%2Fgf.jsonR2i2326R3R4R5R17R6tgoR0y32:assets%2Fcharacters%2FLarri.jsonR2i968R3R4R5R18R6tgoR0y34:assets%2Fcharacters%2Fmom-car.jsonR2i1892R3R4R5R19R6tgoR0y30:assets%2Fcharacters%2Fmom.jsonR2i988R3R4R5R20R6tgoR0y44:assets%2Fcharacters%2Fmonster-christmas.jsonR2i1905R3R4R5R21R6tgoR0y34:assets%2Fcharacters%2Fmonster.jsonR2i1904R3R4R5R22R6tgoR0y32:assets%2Fcharacters%2FMoxie.jsonR2i969R3R4R5R23R6tgoR0y44:assets%2Fcharacters%2Fparents-christmas.jsonR2i3427R3R4R5R24R6tgoR0y38:assets%2Fcharacters%2Fpico-player.jsonR2i1635R3R4R5R25R6tgoR0y31:assets%2Fcharacters%2Fpico.jsonR2i1636R3R4R5R26R6tgoR0y32:assets%2Fcharacters%2Freadme.txtR2i43R3R4R5R27R6tgoR0y34:assets%2Fcharacters%2FRed_SUS.jsonR2i968R3R4R5R28R6tgoR0y39:assets%2Fcharacters%2Fsenpai-angry.jsonR2i1039R3R4R5R29R6tgoR0y33:assets%2Fcharacters%2Fsenpai.jsonR2i1009R3R4R5R30R6tgoR0y33:assets%2Fcharacters%2FSonico.jsonR2i969R3R4R5R31R6tgoR0y33:assets%2Fcharacters%2Fspirit.jsonR2i992R3R4R5R32R6tgoR0y33:assets%2Fcharacters%2Fspooky.jsonR2i1384R3R4R5R33R6tgoR0y32:assets%2Fcharacters%2FSquid.jsonR2i971R3R4R5R34R6tgoR0y33:assets%2Fdata%2FcharacterList.txtR2i10R3R4R5R35R6tgoR0y34:assets%2Fdata%2Fdata-goes-here.txtR2zR3R4R5R36R6tgoR0y37:assets%2Fdata%2FDorkly%2FInfoCard.luaR2i2396R3R4R5R37R6tgoR0y34:assets%2Fdata%2FfreeplayColors.txtR2i82R3R4R5R38R6tgoR0y29:assets%2Fdata%2FintroText.txtR2i185R3R4R5R39R6tgoR0y37:assets%2Fdata%2FLorrus%2FInfoCard.luaR2i2386R3R4R5R40R6tgoR0y41:assets%2Fdata%2FLorrus%2Florrus-easy.jsonR2i47796R3R4R5R41R6tgoR0y41:assets%2Fdata%2FLorrus%2Florrus-hard.jsonR2i47796R3R4R5R42R6tgoR0y36:assets%2Fdata%2FLorrus%2Florrus.jsonR2i47796R3R4R5R43R6tgoR0y36:assets%2Fdata%2FLunic%2FInfoCard.luaR2i2385R3R4R5R44R6tgoR0y39:assets%2Fdata%2FLunic%2Flunic-easy.jsonR2i26224R3R4R5R45R6tgoR0y39:assets%2Fdata%2FLunic%2Flunic-hard.jsonR2i26224R3R4R5R46R6tgoR0y34:assets%2Fdata%2FLunic%2Flunic.jsonR2i26222R3R4R5R47R6tgoR0y29:assets%2Fdata%2Fmain-view.xmlR2i123R3R4R5R48R6tgoR0y36:assets%2Fdata%2FMoopy%2FInfoCard.luaR2i2389R3R4R5R49R6tgoR0y39:assets%2Fdata%2FMoopy%2Fmoopy-easy.jsonR2i64603R3R4R5R50R6tgoR0y39:assets%2Fdata%2FMoopy%2Fmoopy-hard.jsonR2i64603R3R4R5R51R6tgoR0y34:assets%2Fdata%2FMoopy%2Fmoopy.jsonR2i64601R3R4R5R52R6tgoR0y33:assets%2Fdata%2FspecialThanks.txtR2i300R3R4R5R53R6tgoR0y35:assets%2Fdata%2FSped%2FInfoCard.luaR2i2386R3R4R5R54R6tgoR0y37:assets%2Fdata%2FSped%2Fsped-easy.jsonR2i29277R3R4R5R55R6tgoR0y37:assets%2Fdata%2FSped%2Fsped-hard.jsonR2i29471R3R4R5R56R6tgoR0y32:assets%2Fdata%2FSped%2Fsped.jsonR2i29277R3R4R5R57R6tgoR0y29:assets%2Fdata%2FstageList.txtR2i5R3R4R5R58R6tgoR0y41:assets%2Fdata%2FSUS-POGMUS%2FInfoCard.luaR2i2389R3R4R5R59R6tgoR0y49:assets%2Fdata%2FSUS-POGMUS%2Fsus-pogmus-easy.jsonR2i29484R3R4R5R60R6tgoR0y49:assets%2Fdata%2FSUS-POGMUS%2Fsus-pogmus-hard.jsonR2i29484R3R4R5R61R6tgoR0y44:assets%2Fdata%2FSUS-POGMUS%2Fsus-pogmus.jsonR2i29484R3R4R5R62R6tgoR0y37:assets%2Fdata%2Fyouare%2FInfoCard.luaR2i2386R3R4R5R63R6tgoR0y41:assets%2Fdata%2Fyouare%2Fyouare-easy.jsonR2i33756R3R4R5R64R6tgoR0y41:assets%2Fdata%2Fyouare%2Fyouare-hard.jsonR2i33756R3R4R5R65R6tgoR0y36:assets%2Fdata%2Fyouare%2Fyouare.jsonR2i33756R3R4R5R66R6tgoR0y37:assets%2Fimages%2Fachievementgrid.pngR2i263971R3y5:IMAGER5R67R6tgoR0y30:assets%2Fimages%2Falphabet.pngR2i187033R3R68R5R69R6tgoR0y30:assets%2Fimages%2Falphabet.xmlR2i52093R3R4R5R70R6tgoR0y45:assets%2Fimages%2Fcampaign_menu_UI_assets.pngR2i7511R3R68R5R71R6tgoR0y45:assets%2Fimages%2Fcampaign_menu_UI_assets.xmlR2i597R3R4R5R72R6tgoR0y33:assets%2Fimages%2Fchart_quant.pngR2i2593R3R68R5R73R6tgoR0y33:assets%2Fimages%2Fchart_quant.xmlR2i582R3R4R5R74R6tgoR0y34:assets%2Fimages%2Fcheckboxanim.pngR2i42746R3R68R5R75R6tgoR0y34:assets%2Fimages%2Fcheckboxanim.xmlR2i1976R3R4R5R76R6tgoR0y40:assets%2Fimages%2Fcredits%2Fbb-panzu.pngR2i4703R3R68R5R77R6tgoR0y39:assets%2Fimages%2Fcredits%2Fdiscord.pngR2i3505R3R68R5R78R6tgoR0y40:assets%2Fimages%2Fcredits%2Fevilsk8r.pngR2i7602R3R68R5R79R6tgoR0y35:assets%2Fimages%2Fcredits%2Ffun.pngR2i9438R3R68R5R80R6tgoR0y40:assets%2Fimages%2Fcredits%2Fgedehari.pngR2i5983R3R68R5R81R6tgoR0y39:assets%2Fimages%2Fcredits%2Fiflicky.pngR2i5797R3R68R5R82R6tgoR0y43:assets%2Fimages%2Fcredits%2Fkawaisprite.pngR2i3871R3R68R5R83R6tgoR0y38:assets%2Fimages%2Fcredits%2Fkeoiki.pngR2i4291R3R68R5R84R6tgoR0y45:assets%2Fimages%2Fcredits%2Fninjamuffin99.pngR2i4336R3R68R5R85R6tgoR0y45:assets%2Fimages%2Fcredits%2Fphantomarcade.pngR2i7875R3R68R5R86R6tgoR0y45:assets%2Fimages%2Fcredits%2Fpolybiusproxy.pngR2i8864R3R68R5R87R6tgoR0y42:assets%2Fimages%2Fcredits%2Friveroaken.pngR2i6924R3R68R5R88R6tgoR0y43:assets%2Fimages%2Fcredits%2Fshadowmario.pngR2i3081R3R68R5R89R6tgoR0y37:assets%2Fimages%2Fcredits%2Fshubs.pngR2i7595R3R68R5R90R6tgoR0y38:assets%2Fimages%2Fcredits%2Fsmokey.pngR2i5448R3R68R5R91R6tgoR0y34:assets%2Fimages%2Fcry_about_it.pngR2i380631R3R68R5R92R6tgoR0y36:assets%2Fimages%2Fdialogue%2Fbf.jsonR2i987R3R4R5R93R6tgoR0y36:assets%2Fimages%2Fdialogue%2Fgf.jsonR2i807R3R4R5R94R6tgoR0y31:assets%2Fimages%2FDorklyBar.pngR2i15946R3R68R5R95R6tgoR0y28:assets%2Fimages%2Ffunkay.pngR2i135548R3R68R5R96R6tgoR0y35:assets%2Fimages%2FgfDanceTitle.jsonR2i124R3R4R5R97R6tgoR0y34:assets%2Fimages%2FgfDanceTitle.pngR2i1221436R3R68R5R98R6tgoR0y34:assets%2Fimages%2FgfDanceTitle.xmlR2i4259R3R4R5R99R6tgoR0y30:assets%2Fimages%2Fhahadumb.pngR2i16097R3R68R5R100R6tgoR0y27:assets%2Fimages%2FhugeW.pngR2i18069R3R68R5R101R6tgoR0y41:assets%2Fimages%2Ficons%2Ficon-bf-old.pngR2i10263R3R68R5R102R6tgoR0y43:assets%2Fimages%2Ficons%2Ficon-bf-pixel.pngR2i1221R3R68R5R103R6tgoR0y37:assets%2Fimages%2Ficons%2Ficon-bf.pngR2i19936R3R68R5R104R6tgoR0y38:assets%2Fimages%2Ficons%2Ficon-dad.pngR2i14488R3R68R5R105R6tgoR0y40:assets%2Fimages%2Ficons%2Ficon-derek.pngR2i10252R3R68R5R106R6tgoR0y40:assets%2Fimages%2Ficons%2Ficon-epico.pngR2i10581R3R68R5R107R6tgoR0y39:assets%2Fimages%2Ficons%2Ficon-face.pngR2i7096R3R68R5R108R6tgoR0y37:assets%2Fimages%2Ficons%2Ficon-gf.pngR2i11992R3R68R5R109R6tgoR0y40:assets%2Fimages%2Ficons%2Ficon-hoovy.pngR2i8465R3R68R5R110R6tgoR0y40:assets%2Fimages%2Ficons%2Ficon-larri.pngR2i9624R3R68R5R111R6tgoR0y38:assets%2Fimages%2Ficons%2Ficon-mom.pngR2i15612R3R68R5R112R6tgoR0y42:assets%2Fimages%2Ficons%2Ficon-monster.pngR2i23064R3R68R5R113R6tgoR0y40:assets%2Fimages%2Ficons%2Ficon-moxie.pngR2i10616R3R68R5R114R6tgoR0y42:assets%2Fimages%2Ficons%2Ficon-parents.pngR2i19196R3R68R5R115R6tgoR0y39:assets%2Fimages%2Ficons%2Ficon-pico.pngR2i21559R3R68R5R116R6tgoR0y38:assets%2Fimages%2Ficons%2Ficon-red.pngR2i9121R3R68R5R117R6tgoR0y47:assets%2Fimages%2Ficons%2Ficon-senpai-pixel.pngR2i1377R3R68R5R118R6tgoR0y47:assets%2Fimages%2Ficons%2Ficon-spirit-pixel.pngR2i1278R3R68R5R119R6tgoR0y41:assets%2Fimages%2Ficons%2Ficon-spooky.pngR2i10457R3R68R5R120R6tgoR0y40:assets%2Fimages%2Ficons%2Ficon-squid.pngR2i9799R3R68R5R121R6tgoR0y42:assets%2Fimages%2Ficons%2Ficon-tankman.pngR2i7072R3R68R5R122R6tgoR0y39:assets%2Fimages%2Ficons%2Ficon-yobi.pngR2i9430R3R68R5R123R6tgoR0y39:assets%2Fimages%2Ficons%2Ficon-zack.pngR2i10220R3R68R5R124R6tgoR0y39:assets%2Fimages%2Flockedachievement.pngR2i13055R3R68R5R125R6tgoR0y26:assets%2Fimages%2Flogo.pngR2i86924R3R68R5R126R6tgoR0y32:assets%2Fimages%2FlogoBumpin.pngR2i592724R3R68R5R127R6tgoR0y32:assets%2Fimages%2FlogoBumpin.xmlR2i2177R3R4R5R128R6tgoR0y31:assets%2Fimages%2FLorrusBar.pngR2i20736R3R68R5R129R6tgoR0y30:assets%2Fimages%2FLunicBar.pngR2i15128R3R68R5R130R6tgoR0y44:assets%2Fimages%2Fmainmenu%2Fmenu_awards.pngR2i67591R3R68R5R131R6tgoR0y44:assets%2Fimages%2Fmainmenu%2Fmenu_awards.xmlR2i1380R3R4R5R132R6tgoR0y45:assets%2Fimages%2Fmainmenu%2Fmenu_credits.pngR2i69937R3R68R5R133R6tgoR0y45:assets%2Fimages%2Fmainmenu%2Fmenu_credits.xmlR2i1385R3R4R5R134R6tgoR0y44:assets%2Fimages%2Fmainmenu%2Fmenu_donate.pngR2i58703R3R68R5R135R6tgoR0y44:assets%2Fimages%2Fmainmenu%2Fmenu_donate.xmlR2i1375R3R4R5R136R6tgoR0y46:assets%2Fimages%2Fmainmenu%2Fmenu_freeplay.pngR2i71504R3R68R5R137R6tgoR0y46:assets%2Fimages%2Fmainmenu%2Fmenu_freeplay.xmlR2i1399R3R4R5R138R6tgoR0y42:assets%2Fimages%2Fmainmenu%2Fmenu_mods.pngR2i54051R3R68R5R139R6tgoR0y42:assets%2Fimages%2Fmainmenu%2Fmenu_mods.xmlR2i1644R3R4R5R140R6tgoR0y45:assets%2Fimages%2Fmainmenu%2Fmenu_options.pngR2i66084R3R68R5R141R6tgoR0y45:assets%2Fimages%2Fmainmenu%2Fmenu_options.xmlR2i1332R3R4R5R142R6tgoR0y48:assets%2Fimages%2Fmainmenu%2Fmenu_story_mode.pngR2i119619R3R68R5R143R6tgoR0y48:assets%2Fimages%2Fmainmenu%2Fmenu_story_mode.xmlR2i1444R3R4R5R144R6tgoR0y54:assets%2Fimages%2Fmenubackgrounds%2Fmenu_christmas.pngR2i38977R3R68R5R145R6tgoR0y54:assets%2Fimages%2Fmenubackgrounds%2Fmenu_halloween.pngR2i19784R3R68R5R146R6tgoR0y49:assets%2Fimages%2Fmenubackgrounds%2Fmenu_limo.pngR2i15191R3R68R5R147R6tgoR0y51:assets%2Fimages%2Fmenubackgrounds%2Fmenu_philly.pngR2i46318R3R68R5R148R6tgoR0y51:assets%2Fimages%2Fmenubackgrounds%2Fmenu_school.pngR2i6974R3R68R5R149R6tgoR0y50:assets%2Fimages%2Fmenubackgrounds%2Fmenu_stage.pngR2i54688R3R68R5R150R6tgoR0y28:assets%2Fimages%2FmenuBG.pngR2i620342R3R68R5R151R6tgoR0y32:assets%2Fimages%2FmenuBGBlue.pngR2i614586R3R68R5R152R6tgoR0y35:assets%2Fimages%2FmenuBGMagenta.pngR2i553468R3R68R5R153R6tgoR0y42:assets%2Fimages%2Fmenucharacters%2Fbf.jsonR2i125R3R4R5R154R6tgoR0y43:assets%2Fimages%2Fmenucharacters%2Fdad.jsonR2i126R3R4R5R155R6tgoR0y42:assets%2Fimages%2Fmenucharacters%2Fgf.jsonR2i125R3R4R5R156R6tgoR0y46:assets%2Fimages%2Fmenucharacters%2FMenu_BF.pngR2i208834R3R68R5R157R6tgoR0y46:assets%2Fimages%2Fmenucharacters%2FMenu_BF.xmlR2i5582R3R4R5R158R6tgoR0y47:assets%2Fimages%2Fmenucharacters%2FMenu_Dad.pngR2i116690R3R68R5R159R6tgoR0y47:assets%2Fimages%2Fmenucharacters%2FMenu_Dad.xmlR2i2115R3R4R5R160R6tgoR0y46:assets%2Fimages%2Fmenucharacters%2FMenu_GF.pngR2i330213R3R68R5R161R6tgoR0y46:assets%2Fimages%2Fmenucharacters%2FMenu_GF.xmlR2i3802R3R4R5R162R6tgoR0y47:assets%2Fimages%2Fmenucharacters%2FMenu_Mom.pngR2i156895R3R68R5R163R6tgoR0y47:assets%2Fimages%2Fmenucharacters%2FMenu_Mom.xmlR2i2113R3R4R5R164R6tgoR0y51:assets%2Fimages%2Fmenucharacters%2FMenu_Parents.pngR2i351693R3R68R5R165R6tgoR0y51:assets%2Fimages%2Fmenucharacters%2FMenu_Parents.xmlR2i2188R3R4R5R166R6tgoR0y48:assets%2Fimages%2Fmenucharacters%2FMenu_Pico.pngR2i113929R3R68R5R167R6tgoR0y48:assets%2Fimages%2Fmenucharacters%2FMenu_Pico.xmlR2i2142R3R4R5R168R6tgoR0y50:assets%2Fimages%2Fmenucharacters%2FMenu_Senpai.pngR2i66773R3R68R5R169R6tgoR0y50:assets%2Fimages%2Fmenucharacters%2FMenu_Senpai.xmlR2i1348R3R4R5R170R6tgoR0y55:assets%2Fimages%2Fmenucharacters%2FMenu_Spooky_Kids.pngR2i81655R3R68R5R171R6tgoR0y55:assets%2Fimages%2Fmenucharacters%2FMenu_Spooky_Kids.xmlR2i2543R3R4R5R172R6tgoR0y43:assets%2Fimages%2Fmenucharacters%2Fmom.jsonR2i125R3R4R5R173R6tgoR0y57:assets%2Fimages%2Fmenucharacters%2Fparents-christmas.jsonR2i135R3R4R5R174R6tgoR0y44:assets%2Fimages%2Fmenucharacters%2Fpico.jsonR2i129R3R4R5R175R6tgoR0y46:assets%2Fimages%2Fmenucharacters%2Fsenpai.jsonR2i133R3R4R5R176R6tgoR0y46:assets%2Fimages%2Fmenucharacters%2Fspooky.jsonR2i142R3R4R5R177R6tgoR0y31:assets%2Fimages%2FmenuDesat.pngR2i357911R3R68R5R178R6tgoR0y45:assets%2Fimages%2Fmenudifficulties%2Feasy.pngR2i3453R3R68R5R179R6tgoR0y45:assets%2Fimages%2Fmenudifficulties%2Fhard.pngR2i3880R3R68R5R180R6tgoR0y47:assets%2Fimages%2Fmenudifficulties%2Fnormal.pngR2i4853R3R68R5R181R6tgoR0y33:assets%2Fimages%2FMenu_Tracks.pngR2i3487R3R68R5R182R6tgoR0y31:assets%2Fimages%2FmoneyIcon.pngR2i10393R3R68R5R183R6tgoR0y30:assets%2Fimages%2FMoxieBar.pngR2i23915R3R68R5R184R6tgoR0y37:assets%2Fimages%2Fnewgrounds_logo.pngR2i57747R3R68R5R185R6tgoR0y26:assets%2Fimages%2Fnum0.pngR2i3738R3R68R5R186R6tgoR0y26:assets%2Fimages%2Fnum1.pngR2i3390R3R68R5R187R6tgoR0y26:assets%2Fimages%2Fnum2.pngR2i3990R3R68R5R188R6tgoR0y26:assets%2Fimages%2Fnum3.pngR2i4022R3R68R5R189R6tgoR0y26:assets%2Fimages%2Fnum4.pngR2i3989R3R68R5R190R6tgoR0y26:assets%2Fimages%2Fnum5.pngR2i4113R3R68R5R191R6tgoR0y26:assets%2Fimages%2Fnum6.pngR2i4181R3R68R5R192R6tgoR0y26:assets%2Fimages%2Fnum7.pngR2i3692R3R68R5R193R6tgoR0y26:assets%2Fimages%2Fnum8.pngR2i3914R3R68R5R194R6tgoR0y26:assets%2Fimages%2Fnum9.pngR2i3687R3R68R5R195R6tgoR0y31:assets%2Fimages%2FSonicoBar.pngR2i102306R3R68R5R196R6tgoR0y42:assets%2Fimages%2Fstorymenu%2Ftutorial.pngR2i7056R3R68R5R197R6tgoR0y39:assets%2Fimages%2Fstorymenu%2Fweek1.pngR2i6261R3R68R5R198R6tgoR0y39:assets%2Fimages%2Fstorymenu%2Fweek2.pngR2i6517R3R68R5R199R6tgoR0y39:assets%2Fimages%2Fstorymenu%2Fweek3.pngR2i7148R3R68R5R200R6tgoR0y39:assets%2Fimages%2Fstorymenu%2Fweek4.pngR2i6262R3R68R5R201R6tgoR0y39:assets%2Fimages%2Fstorymenu%2Fweek5.pngR2i6440R3R68R5R202R6tgoR0y39:assets%2Fimages%2Fstorymenu%2Fweek6.pngR2i8979R3R68R5R203R6tgoR0y34:assets%2Fimages%2FSUSPOGMUSBar.pngR2i15634R3R68R5R204R6tgoR0y32:assets%2Fimages%2FtitleEnter.pngR2i1449202R3R68R5R205R6tgoR0y32:assets%2Fimages%2FtitleEnter.xmlR2i4875R3R4R5R206R6tgoR0y41:assets%2Fimages%2Fui%2Fbutt_graph0001.pngR2i432R3R68R5R207R6tgoR0y41:assets%2Fimages%2Fui%2Fbutt_graph0002.pngR2i421R3R68R5R208R6tgoR0y41:assets%2Fimages%2Fui%2Fbutt_graph0003.pngR2i612R3R68R5R209R6tgoR0y41:assets%2Fimages%2Fui%2Fbutt_graph0004.pngR2i890R3R68R5R210R6tgoR0y41:assets%2Fimages%2Fui%2Fbutt_graph0005.pngR2i907R3R68R5R211R6tgoR0y35:assets%2Fimages%2Fui%2Fpromptbg.pngR2i5561R3R68R5R212R6tgoR0y41:assets%2Fimages%2Fui%2Fprompt_buttons.pngR2i11947R3R68R5R213R6tgoR0y41:assets%2Fimages%2Fui%2Fprompt_buttons.xmlR2i354R3R4R5R214R6tgoR0y32:assets%2Fimages%2FunknownMod.pngR2i4493R3R68R5R215R6tgoR0y29:assets%2Fimages%2FYobiBar.pngR2i13744R3R68R5R216R6tgoR2i2309657R3y5:MUSICR5y31:assets%2Fmusic%2FfreakyMenu.mp3y9:pathGroupaR218hR6tgoR2i2402257R3R217R5y31:assets%2Fmusic%2FoffsetSong.mp3R219aR220hR6tgoR2i17762R3R217R5y32:assets%2Fsounds%2FcancelMenu.mp3R219aR221hR6tgoR2i91950R3R217R5y33:assets%2Fsounds%2FconfirmMenu.mp3R219aR222hR6tgoR2i9155R3R217R5y34:assets%2Fsounds%2Fintro1-pixel.mp3R219aR223hR6tgoR2i9912R3R217R5y34:assets%2Fsounds%2Fintro2-pixel.mp3R219aR224hR6tgoR2i9128R3R217R5y34:assets%2Fsounds%2Fintro3-pixel.mp3R219aR225hR6tgoR2i21651R3R217R5y35:assets%2Fsounds%2FintroGo-pixel.mp3R219aR226hR6tgoR2i17762R3R217R5y32:assets%2Fsounds%2FscrollMenu.mp3R219aR227hR6tgoR0y27:assets%2Fstages%2Flimo.jsonR2i289R3R4R5R228R6tgoR0y27:assets%2Fstages%2Fmall.jsonR2i287R3R4R5R229R6tgoR0y31:assets%2Fstages%2FmallEvil.jsonR2i285R3R4R5R230R6tgoR0y29:assets%2Fstages%2Fphilly.jsonR2i285R3R4R5R231R6tgoR0y29:assets%2Fstages%2Fschool.jsonR2i290R3R4R5R232R6tgoR0y33:assets%2Fstages%2FschoolEvil.jsonR2i290R3R4R5R233R6tgoR0y29:assets%2Fstages%2Fspooky.jsonR2i285R3R4R5R234R6tgoR0y28:assets%2Fstages%2Fstage.jsonR2i279R3R4R5R235R6tgoR0y30:assets%2Fweeks%2Ffreeplay.jsonR2i613R3R4R5R236R6tgoR0y27:assets%2Fweeks%2Fweek1.jsonR2i440R3R4R5R237R6tgoR0y29:assets%2Fweeks%2FweekList.txtR2i44R3R4R5R238R6tgoR0y21:do%20NOT%20readme.txtR2i4326R3R4R5R239R6tgoR0y34:assets%2Ffonts%2Ffonts-go-here.txtR2zR3R4R5R240R6tgoR2i14656R3y4:FONTy9:classNamey31:__ASSET__assets_fonts_pixel_otfR5y26:assets%2Ffonts%2Fpixel.otfR6tgoR2i75864R3R241R242y29:__ASSET__assets_fonts_vcr_ttfR5y24:assets%2Ffonts%2Fvcr.ttfR6tgoR2i2114R3R217R5y26:flixel%2Fsounds%2Fbeep.mp3R219aR247y26:flixel%2Fsounds%2Fbeep.ogghR6tgoR2i39706R3R217R5y28:flixel%2Fsounds%2Fflixel.mp3R219aR249y28:flixel%2Fsounds%2Fflixel.ogghR6tgoR2i5794R3y5:SOUNDR5R248R219aR247R248hgoR2i33629R3R251R5R250R219aR249R250hgoR2i15744R3R241R242y35:__ASSET__flixel_fonts_nokiafc22_ttfR5y30:flixel%2Ffonts%2Fnokiafc22.ttfR6tgoR2i29724R3R241R242y36:__ASSET__flixel_fonts_monsterrat_ttfR5y31:flixel%2Ffonts%2Fmonsterrat.ttfR6tgoR0y33:flixel%2Fimages%2Fui%2Fbutton.pngR2i519R3R68R5R256R6tgoR0y36:flixel%2Fimages%2Flogo%2Fdefault.pngR2i3280R3R68R5R257R6tgoR0y34:flixel%2Fflixel-ui%2Fimg%2Fbox.pngR2i912R3R68R5R258R6tgoR0y37:flixel%2Fflixel-ui%2Fimg%2Fbutton.pngR2i433R3R68R5R259R6tgoR0y48:flixel%2Fflixel-ui%2Fimg%2Fbutton_arrow_down.pngR2i446R3R68R5R260R6tgoR0y48:flixel%2Fflixel-ui%2Fimg%2Fbutton_arrow_left.pngR2i459R3R68R5R261R6tgoR0y49:flixel%2Fflixel-ui%2Fimg%2Fbutton_arrow_right.pngR2i511R3R68R5R262R6tgoR0y46:flixel%2Fflixel-ui%2Fimg%2Fbutton_arrow_up.pngR2i493R3R68R5R263R6tgoR0y42:flixel%2Fflixel-ui%2Fimg%2Fbutton_thin.pngR2i247R3R68R5R264R6tgoR0y44:flixel%2Fflixel-ui%2Fimg%2Fbutton_toggle.pngR2i534R3R68R5R265R6tgoR0y40:flixel%2Fflixel-ui%2Fimg%2Fcheck_box.pngR2i922R3R68R5R266R6tgoR0y41:flixel%2Fflixel-ui%2Fimg%2Fcheck_mark.pngR2i946R3R68R5R267R6tgoR0y37:flixel%2Fflixel-ui%2Fimg%2Fchrome.pngR2i253R3R68R5R268R6tgoR0y42:flixel%2Fflixel-ui%2Fimg%2Fchrome_flat.pngR2i212R3R68R5R269R6tgoR0y43:flixel%2Fflixel-ui%2Fimg%2Fchrome_inset.pngR2i192R3R68R5R270R6tgoR0y43:flixel%2Fflixel-ui%2Fimg%2Fchrome_light.pngR2i214R3R68R5R271R6tgoR0y44:flixel%2Fflixel-ui%2Fimg%2Fdropdown_mark.pngR2i156R3R68R5R272R6tgoR0y41:flixel%2Fflixel-ui%2Fimg%2Ffinger_big.pngR2i1724R3R68R5R273R6tgoR0y43:flixel%2Fflixel-ui%2Fimg%2Ffinger_small.pngR2i294R3R68R5R274R6tgoR0y38:flixel%2Fflixel-ui%2Fimg%2Fhilight.pngR2i129R3R68R5R275R6tgoR0y36:flixel%2Fflixel-ui%2Fimg%2Finvis.pngR2i128R3R68R5R276R6tgoR0y41:flixel%2Fflixel-ui%2Fimg%2Fminus_mark.pngR2i136R3R68R5R277R6tgoR0y40:flixel%2Fflixel-ui%2Fimg%2Fplus_mark.pngR2i147R3R68R5R278R6tgoR0y36:flixel%2Fflixel-ui%2Fimg%2Fradio.pngR2i191R3R68R5R279R6tgoR0y40:flixel%2Fflixel-ui%2Fimg%2Fradio_dot.pngR2i153R3R68R5R280R6tgoR0y37:flixel%2Fflixel-ui%2Fimg%2Fswatch.pngR2i185R3R68R5R281R6tgoR0y34:flixel%2Fflixel-ui%2Fimg%2Ftab.pngR2i201R3R68R5R282R6tgoR0y39:flixel%2Fflixel-ui%2Fimg%2Ftab_back.pngR2i210R3R68R5R283R6tgoR0y44:flixel%2Fflixel-ui%2Fimg%2Ftooltip_arrow.pngR2i18509R3R68R5R284R6tgoR0y39:flixel%2Fflixel-ui%2Fxml%2Fdefaults.xmlR2i1263R3R4R5R285R6tgoR0y53:flixel%2Fflixel-ui%2Fxml%2Fdefault_loading_screen.xmlR2i1953R3R4R5R286R6tgoR0y44:flixel%2Fflixel-ui%2Fxml%2Fdefault_popup.xmlR2i1848R3R4R5R287R6tgh","rootPath":null,"version":2,"libraryArgs":[],"libraryType":null}';
		manifest = AssetManifest.parse (data, rootPath);
		library = AssetLibrary.fromManifest (manifest);
		Assets.registerLibrary ("default", library);
		

		library = Assets.getLibrary ("videos");
		if (library != null) preloadLibraries.push (library);
		else preloadLibraryNames.push ("videos");
		library = Assets.getLibrary ("default");
		if (library != null) preloadLibraries.push (library);
		else preloadLibraryNames.push ("default");
		

		#end

	}


}


#if kha

null

#else

#if !display
#if flash

@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_characters_bf_car_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_characters_bf_christmas_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_characters_bf_pixel_dead_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_characters_bf_pixel_opponent_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_characters_bf_pixel_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_characters_bf_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_characters_dad_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_characters_derek_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_characters_gf_car_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_characters_gf_christmas_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_characters_gf_pixel_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_characters_gf_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_characters_larri_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_characters_mom_car_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_characters_mom_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_characters_monster_christmas_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_characters_monster_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_characters_moxie_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_characters_parents_christmas_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_characters_pico_player_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_characters_pico_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_characters_readme_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_characters_red_sus_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_characters_senpai_angry_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_characters_senpai_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_characters_sonico_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_characters_spirit_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_characters_spooky_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_characters_squid_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_characterlist_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_data_goes_here_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_dorkly_infocard_lua extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_freeplaycolors_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_introtext_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_lorrus_infocard_lua extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_lorrus_lorrus_easy_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_lorrus_lorrus_hard_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_lorrus_lorrus_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_lunic_infocard_lua extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_lunic_lunic_easy_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_lunic_lunic_hard_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_lunic_lunic_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_main_view_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_moopy_infocard_lua extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_moopy_moopy_easy_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_moopy_moopy_hard_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_moopy_moopy_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_specialthanks_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_sped_infocard_lua extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_sped_sped_easy_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_sped_sped_hard_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_sped_sped_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_stagelist_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_sus_pogmus_infocard_lua extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_sus_pogmus_sus_pogmus_easy_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_sus_pogmus_sus_pogmus_hard_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_sus_pogmus_sus_pogmus_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_youare_infocard_lua extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_youare_youare_easy_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_youare_youare_hard_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_youare_youare_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_achievementgrid_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_alphabet_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_alphabet_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_campaign_menu_ui_assets_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_campaign_menu_ui_assets_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_chart_quant_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_chart_quant_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_checkboxanim_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_checkboxanim_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_credits_bb_panzu_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_credits_discord_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_credits_evilsk8r_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_credits_fun_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_credits_gedehari_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_credits_iflicky_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_credits_kawaisprite_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_credits_keoiki_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_credits_ninjamuffin99_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_credits_phantomarcade_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_credits_polybiusproxy_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_credits_riveroaken_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_credits_shadowmario_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_credits_shubs_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_credits_smokey_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_cry_about_it_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_dialogue_bf_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_dialogue_gf_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_dorklybar_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_funkay_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_gfdancetitle_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_gfdancetitle_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_gfdancetitle_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_hahadumb_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_hugew_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_icons_icon_bf_old_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_icons_icon_bf_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_icons_icon_bf_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_icons_icon_dad_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_icons_icon_derek_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_icons_icon_epico_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_icons_icon_face_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_icons_icon_gf_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_icons_icon_hoovy_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_icons_icon_larri_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_icons_icon_mom_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_icons_icon_monster_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_icons_icon_moxie_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_icons_icon_parents_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_icons_icon_pico_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_icons_icon_red_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_icons_icon_senpai_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_icons_icon_spirit_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_icons_icon_spooky_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_icons_icon_squid_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_icons_icon_tankman_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_icons_icon_yobi_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_icons_icon_zack_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_lockedachievement_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_logo_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_logobumpin_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_logobumpin_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_lorrusbar_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_lunicbar_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_mainmenu_menu_awards_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_mainmenu_menu_awards_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_mainmenu_menu_credits_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_mainmenu_menu_credits_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_mainmenu_menu_donate_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_mainmenu_menu_donate_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_mainmenu_menu_freeplay_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_mainmenu_menu_freeplay_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_mainmenu_menu_mods_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_mainmenu_menu_mods_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_mainmenu_menu_options_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_mainmenu_menu_options_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_mainmenu_menu_story_mode_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_mainmenu_menu_story_mode_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menubackgrounds_menu_christmas_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menubackgrounds_menu_halloween_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menubackgrounds_menu_limo_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menubackgrounds_menu_philly_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menubackgrounds_menu_school_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menubackgrounds_menu_stage_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menubg_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menubgblue_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menubgmagenta_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_bf_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_dad_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_gf_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_menu_bf_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_menu_bf_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_menu_dad_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_menu_dad_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_menu_gf_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_menu_gf_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_menu_mom_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_menu_mom_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_menu_parents_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_menu_parents_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_menu_pico_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_menu_pico_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_menu_senpai_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_menu_senpai_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_menu_spooky_kids_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_menu_spooky_kids_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_mom_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_parents_christmas_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_pico_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_senpai_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_spooky_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menudesat_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menudifficulties_easy_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menudifficulties_hard_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menudifficulties_normal_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menu_tracks_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_moneyicon_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_moxiebar_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_newgrounds_logo_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_num0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_num1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_num2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_num3_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_num4_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_num5_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_num6_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_num7_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_num8_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_num9_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_sonicobar_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_storymenu_tutorial_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_storymenu_week1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_storymenu_week2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_storymenu_week3_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_storymenu_week4_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_storymenu_week5_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_storymenu_week6_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_suspogmusbar_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_titleenter_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_titleenter_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_ui_butt_graph0001_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_ui_butt_graph0002_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_ui_butt_graph0003_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_ui_butt_graph0004_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_ui_butt_graph0005_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_ui_promptbg_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_ui_prompt_buttons_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_ui_prompt_buttons_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_unknownmod_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_yobibar_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_freakymenu_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_offsetsong_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_cancelmenu_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_confirmmenu_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_intro1_pixel_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_intro2_pixel_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_intro3_pixel_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_introgo_pixel_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_scrollmenu_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_stages_limo_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_stages_mall_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_stages_mallevil_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_stages_philly_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_stages_school_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_stages_schoolevil_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_stages_spooky_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_stages_stage_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_weeks_freeplay_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_weeks_week1_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_weeks_weeklist_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_videos_put_your_videos_here_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_album_covers_derek_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_album_covers_larri_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_album_covers_moxie_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_album_covers_red_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_album_covers_sonico_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_album_covers_squid_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_album_covers_yobi_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_bad_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_bfcar_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_bfcar_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_bfchristmas_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_bfchristmas_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_bfpixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_bfpixel_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_bfpixelsdead_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_bfpixelsdead_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_boyfriend_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_boyfriend_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_daddy_dearest_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_daddy_dearest_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_derek_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_derek_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_gfcar_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_gfcar_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_gfchristmas_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_gfchristmas_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_gfpixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_gfpixel_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_gf_assets_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_gf_assets_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_larri_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_larri_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_momcar_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_momcar_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_mom_assets_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_mom_assets_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_mom_dad_christmas_assets_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_mom_dad_christmas_assets_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_monsterchristmas_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_monsterchristmas_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_monster_assets_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_monster_assets_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_moxie_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_moxie_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_pico_fnf_assetss_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_pico_fnf_assetss_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_readme_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_red_sus_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_red_sus_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_senpai_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_senpai_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_sonico_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_sonico_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_spirit_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_spirit_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_spooky_kids_assets_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_spooky_kids_assets_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_squid_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_squid_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_combo_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_dialogue_bf_dialogue_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_dialogue_bf_dialogue_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_dialogue_gf_dialogue_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_dialogue_gf_dialogue_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_eventarrow_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_go_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_good_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_grafix_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_healthbar_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_hurtnotesplashes_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_hurtnotesplashes_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_hurtnote_assets_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_hurtnote_assets_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_images_go_here_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_notesplashes_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_notesplashes_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_note_assets_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_note_assets_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_pausealt_bflol_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_pausealt_bflol_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_pausealt_pausebg_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_pausealt_pauseui_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_pausealt_pauseui_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_bad_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_combo_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_date_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_good_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_hurtnote_assets_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_hurtnote_assetsends_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_note_assets_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_note_assetsends_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_num0_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_num1_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_num2_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_num3_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_num4_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_num5_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_num6_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_num7_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_num8_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_num9_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_ready_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_set_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_shit_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_sick_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_ready_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_set_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_shit_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_sick_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_speech_bubble_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_speech_bubble_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_stageback_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_stagecurtains_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_stagefront_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_stage_light_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_timebar_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_weeb_weebschool_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_weeb_weebsky_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_weeb_weebstreet_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_weeb_weebtrees_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_weeb_weebtrees_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_music_breakfast_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_music_gameover_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_music_gameoverend_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_music_tea_time_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_angry_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_angry_text_box_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_badnoise1_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_badnoise2_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_badnoise3_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_clicktext_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_dialogue_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_dialogueclose_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_fnf_loss_sfx_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_gf_1_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_gf_2_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_gf_3_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_gf_4_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_hitsound_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_intro1_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_intro2_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_intro3_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_introgo_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_metronome_tick_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_missnote1_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_missnote2_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_missnote3_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_sounds_go_here_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_soundtest_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__do_not_readme_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_fonts_fonts_go_here_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_fonts_pixel_otf extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_fonts_vcr_ttf extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_sounds_beep_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_sounds_flixel_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_sounds_beep_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_sounds_flixel_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_fonts_nokiafc22_ttf extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_fonts_monsterrat_ttf extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_images_ui_button_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_images_logo_default_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_box_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_button_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_button_arrow_down_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_button_arrow_left_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_button_arrow_right_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_button_arrow_up_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_button_thin_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_button_toggle_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_check_box_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_check_mark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_chrome_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_chrome_flat_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_chrome_inset_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_chrome_light_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_dropdown_mark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_finger_big_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_finger_small_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_hilight_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_invis_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_minus_mark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_plus_mark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_radio_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_radio_dot_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_swatch_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_tab_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_tab_back_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_tooltip_arrow_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_xml_defaults_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_xml_default_loading_screen_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_xml_default_popup_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__manifest_videos_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__manifest_songs_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__manifest_shared_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__manifest_default_json extends null { }


#elseif (desktop || cpp)

@:keep @:file("assets/preload/characters/bf-car.json") @:noCompletion #if display private #end class __ASSET__assets_characters_bf_car_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/characters/bf-christmas.json") @:noCompletion #if display private #end class __ASSET__assets_characters_bf_christmas_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/characters/bf-pixel-dead.json") @:noCompletion #if display private #end class __ASSET__assets_characters_bf_pixel_dead_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/characters/bf-pixel-opponent.json") @:noCompletion #if display private #end class __ASSET__assets_characters_bf_pixel_opponent_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/characters/bf-pixel.json") @:noCompletion #if display private #end class __ASSET__assets_characters_bf_pixel_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/characters/bf.json") @:noCompletion #if display private #end class __ASSET__assets_characters_bf_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/characters/dad.json") @:noCompletion #if display private #end class __ASSET__assets_characters_dad_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/characters/Derek.json") @:noCompletion #if display private #end class __ASSET__assets_characters_derek_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/characters/gf-car.json") @:noCompletion #if display private #end class __ASSET__assets_characters_gf_car_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/characters/gf-christmas.json") @:noCompletion #if display private #end class __ASSET__assets_characters_gf_christmas_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/characters/gf-pixel.json") @:noCompletion #if display private #end class __ASSET__assets_characters_gf_pixel_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/characters/gf.json") @:noCompletion #if display private #end class __ASSET__assets_characters_gf_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/characters/Larri.json") @:noCompletion #if display private #end class __ASSET__assets_characters_larri_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/characters/mom-car.json") @:noCompletion #if display private #end class __ASSET__assets_characters_mom_car_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/characters/mom.json") @:noCompletion #if display private #end class __ASSET__assets_characters_mom_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/characters/monster-christmas.json") @:noCompletion #if display private #end class __ASSET__assets_characters_monster_christmas_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/characters/monster.json") @:noCompletion #if display private #end class __ASSET__assets_characters_monster_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/characters/Moxie.json") @:noCompletion #if display private #end class __ASSET__assets_characters_moxie_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/characters/parents-christmas.json") @:noCompletion #if display private #end class __ASSET__assets_characters_parents_christmas_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/characters/pico-player.json") @:noCompletion #if display private #end class __ASSET__assets_characters_pico_player_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/characters/pico.json") @:noCompletion #if display private #end class __ASSET__assets_characters_pico_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/characters/readme.txt") @:noCompletion #if display private #end class __ASSET__assets_characters_readme_txt extends haxe.io.Bytes {}
@:keep @:file("assets/preload/characters/Red_SUS.json") @:noCompletion #if display private #end class __ASSET__assets_characters_red_sus_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/characters/senpai-angry.json") @:noCompletion #if display private #end class __ASSET__assets_characters_senpai_angry_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/characters/senpai.json") @:noCompletion #if display private #end class __ASSET__assets_characters_senpai_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/characters/Sonico.json") @:noCompletion #if display private #end class __ASSET__assets_characters_sonico_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/characters/spirit.json") @:noCompletion #if display private #end class __ASSET__assets_characters_spirit_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/characters/spooky.json") @:noCompletion #if display private #end class __ASSET__assets_characters_spooky_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/characters/Squid.json") @:noCompletion #if display private #end class __ASSET__assets_characters_squid_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/characterList.txt") @:noCompletion #if display private #end class __ASSET__assets_data_characterlist_txt extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/data-goes-here.txt") @:noCompletion #if display private #end class __ASSET__assets_data_data_goes_here_txt extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/Dorkly/InfoCard.lua") @:noCompletion #if display private #end class __ASSET__assets_data_dorkly_infocard_lua extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/freeplayColors.txt") @:noCompletion #if display private #end class __ASSET__assets_data_freeplaycolors_txt extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/introText.txt") @:noCompletion #if display private #end class __ASSET__assets_data_introtext_txt extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/Lorrus/InfoCard.lua") @:noCompletion #if display private #end class __ASSET__assets_data_lorrus_infocard_lua extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/Lorrus/lorrus-easy.json") @:noCompletion #if display private #end class __ASSET__assets_data_lorrus_lorrus_easy_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/Lorrus/lorrus-hard.json") @:noCompletion #if display private #end class __ASSET__assets_data_lorrus_lorrus_hard_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/Lorrus/lorrus.json") @:noCompletion #if display private #end class __ASSET__assets_data_lorrus_lorrus_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/Lunic/InfoCard.lua") @:noCompletion #if display private #end class __ASSET__assets_data_lunic_infocard_lua extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/Lunic/lunic-easy.json") @:noCompletion #if display private #end class __ASSET__assets_data_lunic_lunic_easy_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/Lunic/lunic-hard.json") @:noCompletion #if display private #end class __ASSET__assets_data_lunic_lunic_hard_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/Lunic/lunic.json") @:noCompletion #if display private #end class __ASSET__assets_data_lunic_lunic_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/main-view.xml") @:noCompletion #if display private #end class __ASSET__assets_data_main_view_xml extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/Moopy/InfoCard.lua") @:noCompletion #if display private #end class __ASSET__assets_data_moopy_infocard_lua extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/Moopy/moopy-easy.json") @:noCompletion #if display private #end class __ASSET__assets_data_moopy_moopy_easy_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/Moopy/moopy-hard.json") @:noCompletion #if display private #end class __ASSET__assets_data_moopy_moopy_hard_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/Moopy/moopy.json") @:noCompletion #if display private #end class __ASSET__assets_data_moopy_moopy_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/specialThanks.txt") @:noCompletion #if display private #end class __ASSET__assets_data_specialthanks_txt extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/Sped/InfoCard.lua") @:noCompletion #if display private #end class __ASSET__assets_data_sped_infocard_lua extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/Sped/sped-easy.json") @:noCompletion #if display private #end class __ASSET__assets_data_sped_sped_easy_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/Sped/sped-hard.json") @:noCompletion #if display private #end class __ASSET__assets_data_sped_sped_hard_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/Sped/sped.json") @:noCompletion #if display private #end class __ASSET__assets_data_sped_sped_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/stageList.txt") @:noCompletion #if display private #end class __ASSET__assets_data_stagelist_txt extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/SUS-POGMUS/InfoCard.lua") @:noCompletion #if display private #end class __ASSET__assets_data_sus_pogmus_infocard_lua extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/SUS-POGMUS/sus-pogmus-easy.json") @:noCompletion #if display private #end class __ASSET__assets_data_sus_pogmus_sus_pogmus_easy_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/SUS-POGMUS/sus-pogmus-hard.json") @:noCompletion #if display private #end class __ASSET__assets_data_sus_pogmus_sus_pogmus_hard_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/SUS-POGMUS/sus-pogmus.json") @:noCompletion #if display private #end class __ASSET__assets_data_sus_pogmus_sus_pogmus_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/youare/InfoCard.lua") @:noCompletion #if display private #end class __ASSET__assets_data_youare_infocard_lua extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/youare/youare-easy.json") @:noCompletion #if display private #end class __ASSET__assets_data_youare_youare_easy_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/youare/youare-hard.json") @:noCompletion #if display private #end class __ASSET__assets_data_youare_youare_hard_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/youare/youare.json") @:noCompletion #if display private #end class __ASSET__assets_data_youare_youare_json extends haxe.io.Bytes {}
@:keep @:image("assets/preload/images/achievementgrid.png") @:noCompletion #if display private #end class __ASSET__assets_images_achievementgrid_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/alphabet.png") @:noCompletion #if display private #end class __ASSET__assets_images_alphabet_png extends lime.graphics.Image {}
@:keep @:file("assets/preload/images/alphabet.xml") @:noCompletion #if display private #end class __ASSET__assets_images_alphabet_xml extends haxe.io.Bytes {}
@:keep @:image("assets/preload/images/campaign_menu_UI_assets.png") @:noCompletion #if display private #end class __ASSET__assets_images_campaign_menu_ui_assets_png extends lime.graphics.Image {}
@:keep @:file("assets/preload/images/campaign_menu_UI_assets.xml") @:noCompletion #if display private #end class __ASSET__assets_images_campaign_menu_ui_assets_xml extends haxe.io.Bytes {}
@:keep @:image("assets/preload/images/chart_quant.png") @:noCompletion #if display private #end class __ASSET__assets_images_chart_quant_png extends lime.graphics.Image {}
@:keep @:file("assets/preload/images/chart_quant.xml") @:noCompletion #if display private #end class __ASSET__assets_images_chart_quant_xml extends haxe.io.Bytes {}
@:keep @:image("assets/preload/images/checkboxanim.png") @:noCompletion #if display private #end class __ASSET__assets_images_checkboxanim_png extends lime.graphics.Image {}
@:keep @:file("assets/preload/images/checkboxanim.xml") @:noCompletion #if display private #end class __ASSET__assets_images_checkboxanim_xml extends haxe.io.Bytes {}
@:keep @:image("assets/preload/images/credits/bb-panzu.png") @:noCompletion #if display private #end class __ASSET__assets_images_credits_bb_panzu_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/credits/discord.png") @:noCompletion #if display private #end class __ASSET__assets_images_credits_discord_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/credits/evilsk8r.png") @:noCompletion #if display private #end class __ASSET__assets_images_credits_evilsk8r_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/credits/fun.png") @:noCompletion #if display private #end class __ASSET__assets_images_credits_fun_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/credits/gedehari.png") @:noCompletion #if display private #end class __ASSET__assets_images_credits_gedehari_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/credits/iflicky.png") @:noCompletion #if display private #end class __ASSET__assets_images_credits_iflicky_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/credits/kawaisprite.png") @:noCompletion #if display private #end class __ASSET__assets_images_credits_kawaisprite_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/credits/keoiki.png") @:noCompletion #if display private #end class __ASSET__assets_images_credits_keoiki_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/credits/ninjamuffin99.png") @:noCompletion #if display private #end class __ASSET__assets_images_credits_ninjamuffin99_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/credits/phantomarcade.png") @:noCompletion #if display private #end class __ASSET__assets_images_credits_phantomarcade_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/credits/polybiusproxy.png") @:noCompletion #if display private #end class __ASSET__assets_images_credits_polybiusproxy_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/credits/riveroaken.png") @:noCompletion #if display private #end class __ASSET__assets_images_credits_riveroaken_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/credits/shadowmario.png") @:noCompletion #if display private #end class __ASSET__assets_images_credits_shadowmario_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/credits/shubs.png") @:noCompletion #if display private #end class __ASSET__assets_images_credits_shubs_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/credits/smokey.png") @:noCompletion #if display private #end class __ASSET__assets_images_credits_smokey_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/cry_about_it.png") @:noCompletion #if display private #end class __ASSET__assets_images_cry_about_it_png extends lime.graphics.Image {}
@:keep @:file("assets/preload/images/dialogue/bf.json") @:noCompletion #if display private #end class __ASSET__assets_images_dialogue_bf_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/images/dialogue/gf.json") @:noCompletion #if display private #end class __ASSET__assets_images_dialogue_gf_json extends haxe.io.Bytes {}
@:keep @:image("assets/preload/images/DorklyBar.png") @:noCompletion #if display private #end class __ASSET__assets_images_dorklybar_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/funkay.png") @:noCompletion #if display private #end class __ASSET__assets_images_funkay_png extends lime.graphics.Image {}
@:keep @:file("assets/preload/images/gfDanceTitle.json") @:noCompletion #if display private #end class __ASSET__assets_images_gfdancetitle_json extends haxe.io.Bytes {}
@:keep @:image("assets/preload/images/gfDanceTitle.png") @:noCompletion #if display private #end class __ASSET__assets_images_gfdancetitle_png extends lime.graphics.Image {}
@:keep @:file("assets/preload/images/gfDanceTitle.xml") @:noCompletion #if display private #end class __ASSET__assets_images_gfdancetitle_xml extends haxe.io.Bytes {}
@:keep @:image("assets/preload/images/hahadumb.png") @:noCompletion #if display private #end class __ASSET__assets_images_hahadumb_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/hugeW.png") @:noCompletion #if display private #end class __ASSET__assets_images_hugew_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/icons/icon-bf-old.png") @:noCompletion #if display private #end class __ASSET__assets_images_icons_icon_bf_old_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/icons/icon-bf-pixel.png") @:noCompletion #if display private #end class __ASSET__assets_images_icons_icon_bf_pixel_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/icons/icon-bf.png") @:noCompletion #if display private #end class __ASSET__assets_images_icons_icon_bf_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/icons/icon-dad.png") @:noCompletion #if display private #end class __ASSET__assets_images_icons_icon_dad_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/icons/icon-derek.png") @:noCompletion #if display private #end class __ASSET__assets_images_icons_icon_derek_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/icons/icon-epico.png") @:noCompletion #if display private #end class __ASSET__assets_images_icons_icon_epico_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/icons/icon-face.png") @:noCompletion #if display private #end class __ASSET__assets_images_icons_icon_face_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/icons/icon-gf.png") @:noCompletion #if display private #end class __ASSET__assets_images_icons_icon_gf_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/icons/icon-hoovy.png") @:noCompletion #if display private #end class __ASSET__assets_images_icons_icon_hoovy_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/icons/icon-larri.png") @:noCompletion #if display private #end class __ASSET__assets_images_icons_icon_larri_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/icons/icon-mom.png") @:noCompletion #if display private #end class __ASSET__assets_images_icons_icon_mom_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/icons/icon-monster.png") @:noCompletion #if display private #end class __ASSET__assets_images_icons_icon_monster_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/icons/icon-moxie.png") @:noCompletion #if display private #end class __ASSET__assets_images_icons_icon_moxie_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/icons/icon-parents.png") @:noCompletion #if display private #end class __ASSET__assets_images_icons_icon_parents_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/icons/icon-pico.png") @:noCompletion #if display private #end class __ASSET__assets_images_icons_icon_pico_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/icons/icon-red.png") @:noCompletion #if display private #end class __ASSET__assets_images_icons_icon_red_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/icons/icon-senpai-pixel.png") @:noCompletion #if display private #end class __ASSET__assets_images_icons_icon_senpai_pixel_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/icons/icon-spirit-pixel.png") @:noCompletion #if display private #end class __ASSET__assets_images_icons_icon_spirit_pixel_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/icons/icon-spooky.png") @:noCompletion #if display private #end class __ASSET__assets_images_icons_icon_spooky_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/icons/icon-squid.png") @:noCompletion #if display private #end class __ASSET__assets_images_icons_icon_squid_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/icons/icon-tankman.png") @:noCompletion #if display private #end class __ASSET__assets_images_icons_icon_tankman_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/icons/icon-yobi.png") @:noCompletion #if display private #end class __ASSET__assets_images_icons_icon_yobi_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/icons/icon-zack.png") @:noCompletion #if display private #end class __ASSET__assets_images_icons_icon_zack_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/lockedachievement.png") @:noCompletion #if display private #end class __ASSET__assets_images_lockedachievement_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/logo.png") @:noCompletion #if display private #end class __ASSET__assets_images_logo_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/logoBumpin.png") @:noCompletion #if display private #end class __ASSET__assets_images_logobumpin_png extends lime.graphics.Image {}
@:keep @:file("assets/preload/images/logoBumpin.xml") @:noCompletion #if display private #end class __ASSET__assets_images_logobumpin_xml extends haxe.io.Bytes {}
@:keep @:image("assets/preload/images/LorrusBar.png") @:noCompletion #if display private #end class __ASSET__assets_images_lorrusbar_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/LunicBar.png") @:noCompletion #if display private #end class __ASSET__assets_images_lunicbar_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/mainmenu/menu_awards.png") @:noCompletion #if display private #end class __ASSET__assets_images_mainmenu_menu_awards_png extends lime.graphics.Image {}
@:keep @:file("assets/preload/images/mainmenu/menu_awards.xml") @:noCompletion #if display private #end class __ASSET__assets_images_mainmenu_menu_awards_xml extends haxe.io.Bytes {}
@:keep @:image("assets/preload/images/mainmenu/menu_credits.png") @:noCompletion #if display private #end class __ASSET__assets_images_mainmenu_menu_credits_png extends lime.graphics.Image {}
@:keep @:file("assets/preload/images/mainmenu/menu_credits.xml") @:noCompletion #if display private #end class __ASSET__assets_images_mainmenu_menu_credits_xml extends haxe.io.Bytes {}
@:keep @:image("assets/preload/images/mainmenu/menu_donate.png") @:noCompletion #if display private #end class __ASSET__assets_images_mainmenu_menu_donate_png extends lime.graphics.Image {}
@:keep @:file("assets/preload/images/mainmenu/menu_donate.xml") @:noCompletion #if display private #end class __ASSET__assets_images_mainmenu_menu_donate_xml extends haxe.io.Bytes {}
@:keep @:image("assets/preload/images/mainmenu/menu_freeplay.png") @:noCompletion #if display private #end class __ASSET__assets_images_mainmenu_menu_freeplay_png extends lime.graphics.Image {}
@:keep @:file("assets/preload/images/mainmenu/menu_freeplay.xml") @:noCompletion #if display private #end class __ASSET__assets_images_mainmenu_menu_freeplay_xml extends haxe.io.Bytes {}
@:keep @:image("assets/preload/images/mainmenu/menu_mods.png") @:noCompletion #if display private #end class __ASSET__assets_images_mainmenu_menu_mods_png extends lime.graphics.Image {}
@:keep @:file("assets/preload/images/mainmenu/menu_mods.xml") @:noCompletion #if display private #end class __ASSET__assets_images_mainmenu_menu_mods_xml extends haxe.io.Bytes {}
@:keep @:image("assets/preload/images/mainmenu/menu_options.png") @:noCompletion #if display private #end class __ASSET__assets_images_mainmenu_menu_options_png extends lime.graphics.Image {}
@:keep @:file("assets/preload/images/mainmenu/menu_options.xml") @:noCompletion #if display private #end class __ASSET__assets_images_mainmenu_menu_options_xml extends haxe.io.Bytes {}
@:keep @:image("assets/preload/images/mainmenu/menu_story_mode.png") @:noCompletion #if display private #end class __ASSET__assets_images_mainmenu_menu_story_mode_png extends lime.graphics.Image {}
@:keep @:file("assets/preload/images/mainmenu/menu_story_mode.xml") @:noCompletion #if display private #end class __ASSET__assets_images_mainmenu_menu_story_mode_xml extends haxe.io.Bytes {}
@:keep @:image("assets/preload/images/menubackgrounds/menu_christmas.png") @:noCompletion #if display private #end class __ASSET__assets_images_menubackgrounds_menu_christmas_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/menubackgrounds/menu_halloween.png") @:noCompletion #if display private #end class __ASSET__assets_images_menubackgrounds_menu_halloween_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/menubackgrounds/menu_limo.png") @:noCompletion #if display private #end class __ASSET__assets_images_menubackgrounds_menu_limo_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/menubackgrounds/menu_philly.png") @:noCompletion #if display private #end class __ASSET__assets_images_menubackgrounds_menu_philly_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/menubackgrounds/menu_school.png") @:noCompletion #if display private #end class __ASSET__assets_images_menubackgrounds_menu_school_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/menubackgrounds/menu_stage.png") @:noCompletion #if display private #end class __ASSET__assets_images_menubackgrounds_menu_stage_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/menuBG.png") @:noCompletion #if display private #end class __ASSET__assets_images_menubg_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/menuBGBlue.png") @:noCompletion #if display private #end class __ASSET__assets_images_menubgblue_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/menuBGMagenta.png") @:noCompletion #if display private #end class __ASSET__assets_images_menubgmagenta_png extends lime.graphics.Image {}
@:keep @:file("assets/preload/images/menucharacters/bf.json") @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_bf_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/images/menucharacters/dad.json") @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_dad_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/images/menucharacters/gf.json") @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_gf_json extends haxe.io.Bytes {}
@:keep @:image("assets/preload/images/menucharacters/Menu_BF.png") @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_menu_bf_png extends lime.graphics.Image {}
@:keep @:file("assets/preload/images/menucharacters/Menu_BF.xml") @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_menu_bf_xml extends haxe.io.Bytes {}
@:keep @:image("assets/preload/images/menucharacters/Menu_Dad.png") @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_menu_dad_png extends lime.graphics.Image {}
@:keep @:file("assets/preload/images/menucharacters/Menu_Dad.xml") @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_menu_dad_xml extends haxe.io.Bytes {}
@:keep @:image("assets/preload/images/menucharacters/Menu_GF.png") @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_menu_gf_png extends lime.graphics.Image {}
@:keep @:file("assets/preload/images/menucharacters/Menu_GF.xml") @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_menu_gf_xml extends haxe.io.Bytes {}
@:keep @:image("assets/preload/images/menucharacters/Menu_Mom.png") @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_menu_mom_png extends lime.graphics.Image {}
@:keep @:file("assets/preload/images/menucharacters/Menu_Mom.xml") @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_menu_mom_xml extends haxe.io.Bytes {}
@:keep @:image("assets/preload/images/menucharacters/Menu_Parents.png") @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_menu_parents_png extends lime.graphics.Image {}
@:keep @:file("assets/preload/images/menucharacters/Menu_Parents.xml") @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_menu_parents_xml extends haxe.io.Bytes {}
@:keep @:image("assets/preload/images/menucharacters/Menu_Pico.png") @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_menu_pico_png extends lime.graphics.Image {}
@:keep @:file("assets/preload/images/menucharacters/Menu_Pico.xml") @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_menu_pico_xml extends haxe.io.Bytes {}
@:keep @:image("assets/preload/images/menucharacters/Menu_Senpai.png") @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_menu_senpai_png extends lime.graphics.Image {}
@:keep @:file("assets/preload/images/menucharacters/Menu_Senpai.xml") @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_menu_senpai_xml extends haxe.io.Bytes {}
@:keep @:image("assets/preload/images/menucharacters/Menu_Spooky_Kids.png") @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_menu_spooky_kids_png extends lime.graphics.Image {}
@:keep @:file("assets/preload/images/menucharacters/Menu_Spooky_Kids.xml") @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_menu_spooky_kids_xml extends haxe.io.Bytes {}
@:keep @:file("assets/preload/images/menucharacters/mom.json") @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_mom_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/images/menucharacters/parents-christmas.json") @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_parents_christmas_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/images/menucharacters/pico.json") @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_pico_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/images/menucharacters/senpai.json") @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_senpai_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/images/menucharacters/spooky.json") @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_spooky_json extends haxe.io.Bytes {}
@:keep @:image("assets/preload/images/menuDesat.png") @:noCompletion #if display private #end class __ASSET__assets_images_menudesat_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/menudifficulties/easy.png") @:noCompletion #if display private #end class __ASSET__assets_images_menudifficulties_easy_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/menudifficulties/hard.png") @:noCompletion #if display private #end class __ASSET__assets_images_menudifficulties_hard_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/menudifficulties/normal.png") @:noCompletion #if display private #end class __ASSET__assets_images_menudifficulties_normal_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/Menu_Tracks.png") @:noCompletion #if display private #end class __ASSET__assets_images_menu_tracks_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/moneyIcon.png") @:noCompletion #if display private #end class __ASSET__assets_images_moneyicon_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/MoxieBar.png") @:noCompletion #if display private #end class __ASSET__assets_images_moxiebar_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/newgrounds_logo.png") @:noCompletion #if display private #end class __ASSET__assets_images_newgrounds_logo_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/num0.png") @:noCompletion #if display private #end class __ASSET__assets_images_num0_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/num1.png") @:noCompletion #if display private #end class __ASSET__assets_images_num1_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/num2.png") @:noCompletion #if display private #end class __ASSET__assets_images_num2_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/num3.png") @:noCompletion #if display private #end class __ASSET__assets_images_num3_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/num4.png") @:noCompletion #if display private #end class __ASSET__assets_images_num4_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/num5.png") @:noCompletion #if display private #end class __ASSET__assets_images_num5_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/num6.png") @:noCompletion #if display private #end class __ASSET__assets_images_num6_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/num7.png") @:noCompletion #if display private #end class __ASSET__assets_images_num7_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/num8.png") @:noCompletion #if display private #end class __ASSET__assets_images_num8_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/num9.png") @:noCompletion #if display private #end class __ASSET__assets_images_num9_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/SonicoBar.png") @:noCompletion #if display private #end class __ASSET__assets_images_sonicobar_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/storymenu/tutorial.png") @:noCompletion #if display private #end class __ASSET__assets_images_storymenu_tutorial_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/storymenu/week1.png") @:noCompletion #if display private #end class __ASSET__assets_images_storymenu_week1_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/storymenu/week2.png") @:noCompletion #if display private #end class __ASSET__assets_images_storymenu_week2_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/storymenu/week3.png") @:noCompletion #if display private #end class __ASSET__assets_images_storymenu_week3_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/storymenu/week4.png") @:noCompletion #if display private #end class __ASSET__assets_images_storymenu_week4_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/storymenu/week5.png") @:noCompletion #if display private #end class __ASSET__assets_images_storymenu_week5_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/storymenu/week6.png") @:noCompletion #if display private #end class __ASSET__assets_images_storymenu_week6_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/SUSPOGMUSBar.png") @:noCompletion #if display private #end class __ASSET__assets_images_suspogmusbar_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/titleEnter.png") @:noCompletion #if display private #end class __ASSET__assets_images_titleenter_png extends lime.graphics.Image {}
@:keep @:file("assets/preload/images/titleEnter.xml") @:noCompletion #if display private #end class __ASSET__assets_images_titleenter_xml extends haxe.io.Bytes {}
@:keep @:image("assets/preload/images/ui/butt_graph0001.png") @:noCompletion #if display private #end class __ASSET__assets_images_ui_butt_graph0001_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/ui/butt_graph0002.png") @:noCompletion #if display private #end class __ASSET__assets_images_ui_butt_graph0002_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/ui/butt_graph0003.png") @:noCompletion #if display private #end class __ASSET__assets_images_ui_butt_graph0003_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/ui/butt_graph0004.png") @:noCompletion #if display private #end class __ASSET__assets_images_ui_butt_graph0004_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/ui/butt_graph0005.png") @:noCompletion #if display private #end class __ASSET__assets_images_ui_butt_graph0005_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/ui/promptbg.png") @:noCompletion #if display private #end class __ASSET__assets_images_ui_promptbg_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/ui/prompt_buttons.png") @:noCompletion #if display private #end class __ASSET__assets_images_ui_prompt_buttons_png extends lime.graphics.Image {}
@:keep @:file("assets/preload/images/ui/prompt_buttons.xml") @:noCompletion #if display private #end class __ASSET__assets_images_ui_prompt_buttons_xml extends haxe.io.Bytes {}
@:keep @:image("assets/preload/images/unknownMod.png") @:noCompletion #if display private #end class __ASSET__assets_images_unknownmod_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/YobiBar.png") @:noCompletion #if display private #end class __ASSET__assets_images_yobibar_png extends lime.graphics.Image {}
@:keep @:file("assets/preload/music/freakyMenu.mp3") @:noCompletion #if display private #end class __ASSET__assets_music_freakymenu_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/preload/music/offsetSong.mp3") @:noCompletion #if display private #end class __ASSET__assets_music_offsetsong_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/preload/sounds/cancelMenu.mp3") @:noCompletion #if display private #end class __ASSET__assets_sounds_cancelmenu_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/preload/sounds/confirmMenu.mp3") @:noCompletion #if display private #end class __ASSET__assets_sounds_confirmmenu_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/preload/sounds/intro1-pixel.mp3") @:noCompletion #if display private #end class __ASSET__assets_sounds_intro1_pixel_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/preload/sounds/intro2-pixel.mp3") @:noCompletion #if display private #end class __ASSET__assets_sounds_intro2_pixel_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/preload/sounds/intro3-pixel.mp3") @:noCompletion #if display private #end class __ASSET__assets_sounds_intro3_pixel_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/preload/sounds/introGo-pixel.mp3") @:noCompletion #if display private #end class __ASSET__assets_sounds_introgo_pixel_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/preload/sounds/scrollMenu.mp3") @:noCompletion #if display private #end class __ASSET__assets_sounds_scrollmenu_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/preload/stages/limo.json") @:noCompletion #if display private #end class __ASSET__assets_stages_limo_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/stages/mall.json") @:noCompletion #if display private #end class __ASSET__assets_stages_mall_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/stages/mallEvil.json") @:noCompletion #if display private #end class __ASSET__assets_stages_mallevil_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/stages/philly.json") @:noCompletion #if display private #end class __ASSET__assets_stages_philly_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/stages/school.json") @:noCompletion #if display private #end class __ASSET__assets_stages_school_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/stages/schoolEvil.json") @:noCompletion #if display private #end class __ASSET__assets_stages_schoolevil_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/stages/spooky.json") @:noCompletion #if display private #end class __ASSET__assets_stages_spooky_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/stages/stage.json") @:noCompletion #if display private #end class __ASSET__assets_stages_stage_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/weeks/freeplay.json") @:noCompletion #if display private #end class __ASSET__assets_weeks_freeplay_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/weeks/week1.json") @:noCompletion #if display private #end class __ASSET__assets_weeks_week1_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/weeks/weekList.txt") @:noCompletion #if display private #end class __ASSET__assets_weeks_weeklist_txt extends haxe.io.Bytes {}
@:keep @:file("assets/videos/put-your-videos-here.txt") @:noCompletion #if display private #end class __ASSET__assets_videos_put_your_videos_here_txt extends haxe.io.Bytes {}
@:keep @:image("assets/shared/images/album covers/Derek.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_album_covers_derek_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/album covers/Larri.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_album_covers_larri_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/album covers/Moxie.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_album_covers_moxie_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/album covers/Red.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_album_covers_red_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/album covers/Sonico.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_album_covers_sonico_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/album covers/Squid.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_album_covers_squid_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/album covers/Yobi.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_album_covers_yobi_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/bad.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_bad_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/characters/bfCar.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_bfcar_png extends lime.graphics.Image {}
@:keep @:file("assets/shared/images/characters/bfCar.xml") @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_bfcar_xml extends haxe.io.Bytes {}
@:keep @:image("assets/shared/images/characters/bfChristmas.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_bfchristmas_png extends lime.graphics.Image {}
@:keep @:file("assets/shared/images/characters/bfChristmas.xml") @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_bfchristmas_xml extends haxe.io.Bytes {}
@:keep @:image("assets/shared/images/characters/bfPixel.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_bfpixel_png extends lime.graphics.Image {}
@:keep @:file("assets/shared/images/characters/bfPixel.xml") @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_bfpixel_xml extends haxe.io.Bytes {}
@:keep @:image("assets/shared/images/characters/bfPixelsDEAD.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_bfpixelsdead_png extends lime.graphics.Image {}
@:keep @:file("assets/shared/images/characters/bfPixelsDEAD.xml") @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_bfpixelsdead_xml extends haxe.io.Bytes {}
@:keep @:image("assets/shared/images/characters/BOYFRIEND.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_boyfriend_png extends lime.graphics.Image {}
@:keep @:file("assets/shared/images/characters/BOYFRIEND.xml") @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_boyfriend_xml extends haxe.io.Bytes {}
@:keep @:image("assets/shared/images/characters/DADDY_DEAREST.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_daddy_dearest_png extends lime.graphics.Image {}
@:keep @:file("assets/shared/images/characters/DADDY_DEAREST.xml") @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_daddy_dearest_xml extends haxe.io.Bytes {}
@:keep @:image("assets/shared/images/characters/Derek.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_derek_png extends lime.graphics.Image {}
@:keep @:file("assets/shared/images/characters/Derek.xml") @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_derek_xml extends haxe.io.Bytes {}
@:keep @:image("assets/shared/images/characters/gfCar.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_gfcar_png extends lime.graphics.Image {}
@:keep @:file("assets/shared/images/characters/gfCar.xml") @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_gfcar_xml extends haxe.io.Bytes {}
@:keep @:image("assets/shared/images/characters/gfChristmas.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_gfchristmas_png extends lime.graphics.Image {}
@:keep @:file("assets/shared/images/characters/gfChristmas.xml") @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_gfchristmas_xml extends haxe.io.Bytes {}
@:keep @:image("assets/shared/images/characters/gfPixel.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_gfpixel_png extends lime.graphics.Image {}
@:keep @:file("assets/shared/images/characters/gfPixel.xml") @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_gfpixel_xml extends haxe.io.Bytes {}
@:keep @:image("assets/shared/images/characters/GF_assets.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_gf_assets_png extends lime.graphics.Image {}
@:keep @:file("assets/shared/images/characters/GF_assets.xml") @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_gf_assets_xml extends haxe.io.Bytes {}
@:keep @:image("assets/shared/images/characters/Larri.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_larri_png extends lime.graphics.Image {}
@:keep @:file("assets/shared/images/characters/Larri.xml") @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_larri_xml extends haxe.io.Bytes {}
@:keep @:image("assets/shared/images/characters/momCar.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_momcar_png extends lime.graphics.Image {}
@:keep @:file("assets/shared/images/characters/momCar.xml") @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_momcar_xml extends haxe.io.Bytes {}
@:keep @:image("assets/shared/images/characters/Mom_Assets.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_mom_assets_png extends lime.graphics.Image {}
@:keep @:file("assets/shared/images/characters/Mom_Assets.xml") @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_mom_assets_xml extends haxe.io.Bytes {}
@:keep @:image("assets/shared/images/characters/mom_dad_christmas_assets.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_mom_dad_christmas_assets_png extends lime.graphics.Image {}
@:keep @:file("assets/shared/images/characters/mom_dad_christmas_assets.xml") @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_mom_dad_christmas_assets_xml extends haxe.io.Bytes {}
@:keep @:image("assets/shared/images/characters/monsterChristmas.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_monsterchristmas_png extends lime.graphics.Image {}
@:keep @:file("assets/shared/images/characters/monsterChristmas.xml") @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_monsterchristmas_xml extends haxe.io.Bytes {}
@:keep @:image("assets/shared/images/characters/Monster_Assets.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_monster_assets_png extends lime.graphics.Image {}
@:keep @:file("assets/shared/images/characters/Monster_Assets.xml") @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_monster_assets_xml extends haxe.io.Bytes {}
@:keep @:image("assets/shared/images/characters/Moxie.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_moxie_png extends lime.graphics.Image {}
@:keep @:file("assets/shared/images/characters/Moxie.xml") @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_moxie_xml extends haxe.io.Bytes {}
@:keep @:image("assets/shared/images/characters/Pico_FNF_assetss.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_pico_fnf_assetss_png extends lime.graphics.Image {}
@:keep @:file("assets/shared/images/characters/Pico_FNF_assetss.xml") @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_pico_fnf_assetss_xml extends haxe.io.Bytes {}
@:keep @:file("assets/shared/images/characters/readme.txt") @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_readme_txt extends haxe.io.Bytes {}
@:keep @:image("assets/shared/images/characters/Red_SUS.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_red_sus_png extends lime.graphics.Image {}
@:keep @:file("assets/shared/images/characters/Red_SUS.xml") @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_red_sus_xml extends haxe.io.Bytes {}
@:keep @:image("assets/shared/images/characters/senpai.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_senpai_png extends lime.graphics.Image {}
@:keep @:file("assets/shared/images/characters/senpai.xml") @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_senpai_xml extends haxe.io.Bytes {}
@:keep @:image("assets/shared/images/characters/sonico.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_sonico_png extends lime.graphics.Image {}
@:keep @:file("assets/shared/images/characters/sonico.xml") @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_sonico_xml extends haxe.io.Bytes {}
@:keep @:image("assets/shared/images/characters/spirit.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_spirit_png extends lime.graphics.Image {}
@:keep @:file("assets/shared/images/characters/spirit.txt") @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_spirit_txt extends haxe.io.Bytes {}
@:keep @:image("assets/shared/images/characters/spooky_kids_assets.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_spooky_kids_assets_png extends lime.graphics.Image {}
@:keep @:file("assets/shared/images/characters/spooky_kids_assets.xml") @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_spooky_kids_assets_xml extends haxe.io.Bytes {}
@:keep @:image("assets/shared/images/characters/Squid.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_squid_png extends lime.graphics.Image {}
@:keep @:file("assets/shared/images/characters/Squid.xml") @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_squid_xml extends haxe.io.Bytes {}
@:keep @:image("assets/shared/images/combo.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_combo_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/dialogue/BF_Dialogue.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_dialogue_bf_dialogue_png extends lime.graphics.Image {}
@:keep @:file("assets/shared/images/dialogue/BF_Dialogue.xml") @:noCompletion #if display private #end class __ASSET__assets_shared_images_dialogue_bf_dialogue_xml extends haxe.io.Bytes {}
@:keep @:image("assets/shared/images/dialogue/GF_Dialogue.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_dialogue_gf_dialogue_png extends lime.graphics.Image {}
@:keep @:file("assets/shared/images/dialogue/GF_Dialogue.xml") @:noCompletion #if display private #end class __ASSET__assets_shared_images_dialogue_gf_dialogue_xml extends haxe.io.Bytes {}
@:keep @:image("assets/shared/images/eventArrow.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_eventarrow_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/go.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_go_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/good.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_good_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/grafix.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_grafix_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/healthBar.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_healthbar_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/HURTnoteSplashes.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_hurtnotesplashes_png extends lime.graphics.Image {}
@:keep @:file("assets/shared/images/HURTnoteSplashes.xml") @:noCompletion #if display private #end class __ASSET__assets_shared_images_hurtnotesplashes_xml extends haxe.io.Bytes {}
@:keep @:image("assets/shared/images/HURTNOTE_assets.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_hurtnote_assets_png extends lime.graphics.Image {}
@:keep @:file("assets/shared/images/HURTNOTE_assets.xml") @:noCompletion #if display private #end class __ASSET__assets_shared_images_hurtnote_assets_xml extends haxe.io.Bytes {}
@:keep @:file("assets/shared/images/images-go-here.txt") @:noCompletion #if display private #end class __ASSET__assets_shared_images_images_go_here_txt extends haxe.io.Bytes {}
@:keep @:image("assets/shared/images/noteSplashes.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_notesplashes_png extends lime.graphics.Image {}
@:keep @:file("assets/shared/images/noteSplashes.xml") @:noCompletion #if display private #end class __ASSET__assets_shared_images_notesplashes_xml extends haxe.io.Bytes {}
@:keep @:image("assets/shared/images/NOTE_assets.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_note_assets_png extends lime.graphics.Image {}
@:keep @:file("assets/shared/images/NOTE_assets.xml") @:noCompletion #if display private #end class __ASSET__assets_shared_images_note_assets_xml extends haxe.io.Bytes {}
@:keep @:image("assets/shared/images/pauseAlt/bfLol.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_pausealt_bflol_png extends lime.graphics.Image {}
@:keep @:file("assets/shared/images/pauseAlt/bfLol.xml") @:noCompletion #if display private #end class __ASSET__assets_shared_images_pausealt_bflol_xml extends haxe.io.Bytes {}
@:keep @:image("assets/shared/images/pauseAlt/pauseBG.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_pausealt_pausebg_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/pauseAlt/pauseUI.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_pausealt_pauseui_png extends lime.graphics.Image {}
@:keep @:file("assets/shared/images/pauseAlt/pauseUI.xml") @:noCompletion #if display private #end class __ASSET__assets_shared_images_pausealt_pauseui_xml extends haxe.io.Bytes {}
@:keep @:image("assets/shared/images/pixelUI/bad-pixel.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_bad_pixel_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/pixelUI/combo-pixel.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_combo_pixel_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/pixelUI/date-pixel.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_date_pixel_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/pixelUI/good-pixel.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_good_pixel_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/pixelUI/HURTNOTE_assets.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_hurtnote_assets_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/pixelUI/HURTNOTE_assetsENDS.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_hurtnote_assetsends_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/pixelUI/NOTE_assets.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_note_assets_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/pixelUI/NOTE_assetsENDS.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_note_assetsends_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/pixelUI/num0-pixel.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_num0_pixel_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/pixelUI/num1-pixel.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_num1_pixel_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/pixelUI/num2-pixel.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_num2_pixel_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/pixelUI/num3-pixel.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_num3_pixel_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/pixelUI/num4-pixel.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_num4_pixel_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/pixelUI/num5-pixel.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_num5_pixel_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/pixelUI/num6-pixel.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_num6_pixel_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/pixelUI/num7-pixel.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_num7_pixel_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/pixelUI/num8-pixel.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_num8_pixel_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/pixelUI/num9-pixel.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_num9_pixel_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/pixelUI/ready-pixel.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_ready_pixel_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/pixelUI/set-pixel.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_set_pixel_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/pixelUI/shit-pixel.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_shit_pixel_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/pixelUI/sick-pixel.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_sick_pixel_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/ready.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_ready_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/set.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_set_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/shit.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_shit_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/sick.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_sick_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/speech_bubble.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_speech_bubble_png extends lime.graphics.Image {}
@:keep @:file("assets/shared/images/speech_bubble.xml") @:noCompletion #if display private #end class __ASSET__assets_shared_images_speech_bubble_xml extends haxe.io.Bytes {}
@:keep @:image("assets/shared/images/stageback.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_stageback_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/stagecurtains.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_stagecurtains_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/stagefront.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_stagefront_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/stage_light.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_stage_light_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/timeBar.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_timebar_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/weeb/weebSchool.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_weeb_weebschool_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/weeb/weebSky.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_weeb_weebsky_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/weeb/weebStreet.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_weeb_weebstreet_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/weeb/weebTrees.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_weeb_weebtrees_png extends lime.graphics.Image {}
@:keep @:file("assets/shared/images/weeb/weebTrees.txt") @:noCompletion #if display private #end class __ASSET__assets_shared_images_weeb_weebtrees_txt extends haxe.io.Bytes {}
@:keep @:file("assets/shared/music/breakfast.mp3") @:noCompletion #if display private #end class __ASSET__assets_shared_music_breakfast_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/shared/music/gameOver.mp3") @:noCompletion #if display private #end class __ASSET__assets_shared_music_gameover_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/shared/music/gameOverEnd.mp3") @:noCompletion #if display private #end class __ASSET__assets_shared_music_gameoverend_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/shared/music/tea-time.mp3") @:noCompletion #if display private #end class __ASSET__assets_shared_music_tea_time_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/shared/sounds/ANGRY.mp3") @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_angry_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/shared/sounds/ANGRY_TEXT_BOX.mp3") @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_angry_text_box_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/shared/sounds/badnoise1.mp3") @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_badnoise1_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/shared/sounds/badnoise2.mp3") @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_badnoise2_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/shared/sounds/badnoise3.mp3") @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_badnoise3_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/shared/sounds/clickText.mp3") @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_clicktext_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/shared/sounds/dialogue.mp3") @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_dialogue_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/shared/sounds/dialogueClose.mp3") @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_dialogueclose_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/shared/sounds/fnf_loss_sfx.mp3") @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_fnf_loss_sfx_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/shared/sounds/GF_1.mp3") @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_gf_1_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/shared/sounds/GF_2.mp3") @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_gf_2_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/shared/sounds/GF_3.mp3") @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_gf_3_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/shared/sounds/GF_4.mp3") @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_gf_4_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/shared/sounds/hitsound.mp3") @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_hitsound_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/shared/sounds/intro1.mp3") @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_intro1_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/shared/sounds/intro2.mp3") @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_intro2_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/shared/sounds/intro3.mp3") @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_intro3_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/shared/sounds/introGo.mp3") @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_introgo_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/shared/sounds/Metronome_Tick.mp3") @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_metronome_tick_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/shared/sounds/missnote1.mp3") @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_missnote1_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/shared/sounds/missnote2.mp3") @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_missnote2_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/shared/sounds/missnote3.mp3") @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_missnote3_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/shared/sounds/sounds-go-here.txt") @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_sounds_go_here_txt extends haxe.io.Bytes {}
@:keep @:file("assets/shared/sounds/soundTest.mp3") @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_soundtest_mp3 extends haxe.io.Bytes {}
@:keep @:file("art/readme.txt") @:noCompletion #if display private #end class __ASSET__do_not_readme_txt extends haxe.io.Bytes {}
@:keep @:file("assets/fonts/fonts-go-here.txt") @:noCompletion #if display private #end class __ASSET__assets_fonts_fonts_go_here_txt extends haxe.io.Bytes {}
@:keep @:font("export/release/html5/obj/webfont/pixel.otf") @:noCompletion #if display private #end class __ASSET__assets_fonts_pixel_otf extends lime.text.Font {}
@:keep @:font("export/release/html5/obj/webfont/vcr.ttf") @:noCompletion #if display private #end class __ASSET__assets_fonts_vcr_ttf extends lime.text.Font {}
@:keep @:file("C:/HaxeToolkit/haxe/lib/flixel/4,11,0/assets/sounds/beep.mp3") @:noCompletion #if display private #end class __ASSET__flixel_sounds_beep_mp3 extends haxe.io.Bytes {}
@:keep @:file("C:/HaxeToolkit/haxe/lib/flixel/4,11,0/assets/sounds/flixel.mp3") @:noCompletion #if display private #end class __ASSET__flixel_sounds_flixel_mp3 extends haxe.io.Bytes {}
@:keep @:file("C:/HaxeToolkit/haxe/lib/flixel/4,11,0/assets/sounds/beep.ogg") @:noCompletion #if display private #end class __ASSET__flixel_sounds_beep_ogg extends haxe.io.Bytes {}
@:keep @:file("C:/HaxeToolkit/haxe/lib/flixel/4,11,0/assets/sounds/flixel.ogg") @:noCompletion #if display private #end class __ASSET__flixel_sounds_flixel_ogg extends haxe.io.Bytes {}
@:keep @:font("export/release/html5/obj/webfont/nokiafc22.ttf") @:noCompletion #if display private #end class __ASSET__flixel_fonts_nokiafc22_ttf extends lime.text.Font {}
@:keep @:font("export/release/html5/obj/webfont/monsterrat.ttf") @:noCompletion #if display private #end class __ASSET__flixel_fonts_monsterrat_ttf extends lime.text.Font {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel/4,11,0/assets/images/ui/button.png") @:noCompletion #if display private #end class __ASSET__flixel_images_ui_button_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel/4,11,0/assets/images/logo/default.png") @:noCompletion #if display private #end class __ASSET__flixel_images_logo_default_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/images/box.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_box_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/images/button.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_button_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/images/button_arrow_down.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_button_arrow_down_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/images/button_arrow_left.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_button_arrow_left_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/images/button_arrow_right.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_button_arrow_right_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/images/button_arrow_up.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_button_arrow_up_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/images/button_thin.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_button_thin_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/images/button_toggle.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_button_toggle_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/images/check_box.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_check_box_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/images/check_mark.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_check_mark_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/images/chrome.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_chrome_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/images/chrome_flat.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_chrome_flat_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/images/chrome_inset.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_chrome_inset_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/images/chrome_light.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_chrome_light_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/images/dropdown_mark.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_dropdown_mark_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/images/finger_big.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_finger_big_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/images/finger_small.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_finger_small_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/images/hilight.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_hilight_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/images/invis.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_invis_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/images/minus_mark.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_minus_mark_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/images/plus_mark.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_plus_mark_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/images/radio.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_radio_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/images/radio_dot.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_radio_dot_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/images/swatch.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_swatch_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/images/tab.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_tab_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/images/tab_back.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_tab_back_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/images/tooltip_arrow.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_tooltip_arrow_png extends lime.graphics.Image {}
@:keep @:file("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/xml/defaults.xml") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_xml_defaults_xml extends haxe.io.Bytes {}
@:keep @:file("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/xml/default_loading_screen.xml") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_xml_default_loading_screen_xml extends haxe.io.Bytes {}
@:keep @:file("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/xml/default_popup.xml") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_xml_default_popup_xml extends haxe.io.Bytes {}
@:keep @:file("") @:noCompletion #if display private #end class __ASSET__manifest_songs_json extends haxe.io.Bytes {}
@:keep @:file("") @:noCompletion #if display private #end class __ASSET__manifest_default_json extends haxe.io.Bytes {}



#else

@:keep @:expose('__ASSET__assets_fonts_pixel_otf') @:noCompletion #if display private #end class __ASSET__assets_fonts_pixel_otf extends lime.text.Font { public function new () { #if !html5 __fontPath = "assets/fonts/pixel"; #else ascender = 1125; descender = -250; height = 1375; numGlyphs = 262; underlinePosition = -143; underlineThickness = 20; unitsPerEM = 1000; #end name = "Pixel Arial 11 Bold"; super (); }}
@:keep @:expose('__ASSET__assets_fonts_vcr_ttf') @:noCompletion #if display private #end class __ASSET__assets_fonts_vcr_ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "assets/fonts/vcr"; #else ascender = 1800; descender = 0; height = 2000; numGlyphs = 204; underlinePosition = -292; underlineThickness = 150; unitsPerEM = 2048; #end name = "VCR OSD Mono"; super (); }}
@:keep @:expose('__ASSET__flixel_fonts_nokiafc22_ttf') @:noCompletion #if display private #end class __ASSET__flixel_fonts_nokiafc22_ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "flixel/fonts/nokiafc22"; #else ascender = 2048; descender = -512; height = 2816; numGlyphs = 172; underlinePosition = -640; underlineThickness = 256; unitsPerEM = 2048; #end name = "Nokia Cellphone FC Small"; super (); }}
@:keep @:expose('__ASSET__flixel_fonts_monsterrat_ttf') @:noCompletion #if display private #end class __ASSET__flixel_fonts_monsterrat_ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "flixel/fonts/monsterrat"; #else ascender = 968; descender = -251; height = 1219; numGlyphs = 263; underlinePosition = -150; underlineThickness = 50; unitsPerEM = 1000; #end name = "Monsterrat"; super (); }}


#end

#if (openfl && !flash)

#if html5
@:keep @:expose('__ASSET__OPENFL__assets_fonts_pixel_otf') @:noCompletion #if display private #end class __ASSET__OPENFL__assets_fonts_pixel_otf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__assets_fonts_pixel_otf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__assets_fonts_vcr_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__assets_fonts_vcr_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__assets_fonts_vcr_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__flixel_fonts_nokiafc22_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__flixel_fonts_nokiafc22_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__flixel_fonts_monsterrat_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__flixel_fonts_monsterrat_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__flixel_fonts_monsterrat_ttf ()); super (); }}

#else
@:keep @:expose('__ASSET__OPENFL__assets_fonts_pixel_otf') @:noCompletion #if display private #end class __ASSET__OPENFL__assets_fonts_pixel_otf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__assets_fonts_pixel_otf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__assets_fonts_vcr_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__assets_fonts_vcr_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__assets_fonts_vcr_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__flixel_fonts_nokiafc22_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__flixel_fonts_nokiafc22_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__flixel_fonts_monsterrat_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__flixel_fonts_monsterrat_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__flixel_fonts_monsterrat_ttf ()); super (); }}

#end

#end
#end

#end

#end