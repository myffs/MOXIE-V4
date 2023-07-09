package;

import flixel.system.FlxAssets.FlxShader;
import flixel.FlxBasic;

class GloomyShader extends FlxShader {
    @:glFragmentSource('
        #pragma header
        uniform vec4 color = vec4(0.01, 0.03, 0.23, 0.3); // keep this for blending

        void main(){
            gl_FragColor = color;
        }
    ')

    public function new()
        super();
}