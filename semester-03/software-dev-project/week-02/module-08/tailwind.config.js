/** @type {import('tailwindcss').Config} */
module.exports = {
  content: ["public/*.{html,js}"],
  theme: {
    fontFamily: {
      'sans': ['Inter', 'sans-serif'],
    },
    extend: {
      colors: {
        "primary": "#FF1F3D",
        "secondery": "rgba(37,37,37,0.2)",
        "seconderylite": "rgba(37, 37, 37, 0.15)"
      },

    },
  },
  plugins: [],
}

