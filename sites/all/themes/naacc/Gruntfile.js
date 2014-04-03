module.exports = function(grunt) {
	grunt.initConfig({
		pkg: grunt.file.readJSON('package.json'),
		watch: {
			sass: {
				files: ['assets/scss/**/*.{scss,sass}','assets/scss/_partials/**/*.{scss,sass}'],
				tasks: ['sass:dist']
			},
		  coffee: {
		    files: ['assets/coffee/*.coffee'],
		    tasks: 'coffee'
		  },
			livereload: {
				files: ['*.html', '*.php', 'assets/js/**/*.{js,json}', 'assets/css/*.css','assets/images/**/*.{png,jpg,jpeg,gif,webp,svg}'],
				options: {
					livereload: true
				}
			}
		},
		sass: {
			dist: {
				files: {
					'assets/css/app.css': 'assets/scss/app.scss',
					'assets/css/front.css': 'assets/scss/front.scss',
					'assets/css/members.css': 'assets/scss/members.scss'
				}
			}
		},
		coffee: {
			compile: {
				files: {
					'assets/js/app.js': 'assets/coffee/app.coffee',
					'assets/js/front.js': 'assets/coffee/front.coffee',
					'assets/js/members.js': 'assets/coffee/members.coffee'
				}
			}
		},
		imagemin: {
	    dynamic: {
        files: [{
          expand: true,
          cwd: 'assets/images',
          src: ['**/*.{png,jpg,gif}'],
          dest: 'assets/images'
        }]
	    }
		}
	});
	grunt.registerTask('default', ['sass:dist', 'coffee', 'imagemin', 'watch']);
	grunt.loadNpmTasks('grunt-contrib-sass');
  grunt.loadNpmTasks('grunt-contrib-coffee');
	grunt.loadNpmTasks('grunt-contrib-imagemin');
	grunt.loadNpmTasks('grunt-contrib-watch');
};
